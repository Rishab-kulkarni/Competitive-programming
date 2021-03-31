
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		if(x == 1){
			if(m == 0){
				ans++;
			}
			else m--;
		}
		if(x == 2){
			if(k != 0) k--;
			else{
				if(m == 0){
					++ans;
				}
				else m--;
			}
		}
	}
	cout << ans << '\n';
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}

