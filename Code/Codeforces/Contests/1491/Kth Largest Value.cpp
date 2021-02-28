#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(){
	int n,q;
	cin >> n >> q;
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	int cnt = count(a.begin() + 1, a.end(), 1);
	
	for(int i = 1 ; i<= q; i++){
		int t, val;
		cin >> t >> val;
		if(t == 1){
			if(a[val] == 0) cnt++;
			else cnt--;
			a[val] = 1 - a[val];
		}
		
		else if(t == 2){
			if(cnt >= val) cout << 1 << '\n';
			else cout << 0 << '\n';  	
		}
	}
	
//	for(auto val : a) cout << val << ' ';
	
	
}

int main(){

	int t = 1; 
	//	cin >> t;
	while(t--){
		solve();	
	}
} 
