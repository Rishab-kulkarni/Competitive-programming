
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int T,s,q;
	cin >> T >> s >> q;
	
	int cnt = 0;
	while(s < T){
		s *= q;
		cnt++;
	}
	cout << cnt << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
