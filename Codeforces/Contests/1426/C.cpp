#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

typedef long long ll;
int main(){
	
	fastio();
		
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		
//		if(n == 1){
//			cout << 0 << endl;
//			continue;
//		}
		
		int cnt = 0;
		
		int ans = INT32_MAX;
		for(int i = 1 ; i*i <= n ; i++){
			int val = ceil(n/(double)i);
			ans = min(ans, i -1 + val-1);
		}		
		
		cout << ans << endl;
				
//		int ans = cnt + ceil(n/cnt);
//		cout << ans << endl;
//				
	}
}
