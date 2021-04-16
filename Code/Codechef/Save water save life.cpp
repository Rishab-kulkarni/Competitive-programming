
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int H,x,y,C;
	cin >> H >> x >> y >> C;
	
	
	cout << ( H*(x + (y/2)) <= C ? "YES" : "NO") << '\n';
	
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
