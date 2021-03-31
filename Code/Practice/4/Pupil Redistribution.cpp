
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	int h1[6] = {0};
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x; h1[x]++;
	}
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x; h1[x]--;
	}
	
	for(int i = 1 ; i <= 5 ; i++){
		if(abs(h1[i]) & 1){
			cout << -1 << '\n'; return;
		}
	} 
	
	int ans = 0;
	for(int i = 1 ; i <= 5 ; i++){
		ans += abs(h1[i])/2; 
	}
	cout << ans/2 << '\n';
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

