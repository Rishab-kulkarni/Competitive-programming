#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout)
using namespace std;

typedef long long ll;
int main(){
	
	
	fastio();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n+1);
		
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		
//		int best = 0;
//		
//		int i = 0;
//		// O(n^2) -- brute force
//		for(int i = 1 ; i <= n ; i++){
//			int j = i;
//			int sc = 0;
//			while(j <= n){
//				sc += a[j];
//				j += a[j];
//			}
//			
//			best = max(sc,best); 
//		}
//		
//		cout << best << endl;


		vector<int> cnt(n+1, 0);
		
		for(int i = 1 ; i <= n ; i++){
			cnt[i] += a[i];
			
			if(i + a[i] <= n) cnt[i+a[i]] = max(cnt[i+a[i]], cnt[i]);
		}
		
		int ans = *max_element(cnt.begin(), cnt.end());
		cout << ans << endl;
		
		
		
		



	}
}
