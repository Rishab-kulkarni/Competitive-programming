#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool check(ll val,ll num,ll k){
		
	while(val <= INT32_MAX - 1){
		val *= 2;
		if(val == k || val%k == 0){
			return true;
		}
	}
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		vector<bool> vis(n, false);
		for(int i = 0 ; i < n ; ++i) cin >> a[i];
		
		int cnt = 0;
		// O(n^2*logn) - brute force
//		for(int i = 0 ; i < n ; i++){
//			for(int j = i ; j < n ; j++){
//				
//				if(check(a[i] + a[j],k) && !vis[i]) {
//					vis[i] = true;
//				}
//			}
//		}		
		
		while(k%2 == 0){
			k /= 2;
		}
		
	
		for(int i = 0 ; i < n ; i++){
			if(a[i]%k  == 0){
				cnt++;	
			}
		}		
		
					
		cout << (cnt == n ? "YES" : "NO") << endl;
	} 
	
}
