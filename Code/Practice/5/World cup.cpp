
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// ans can be between 1-8
	int n,a,b;
	cin >> n >> a >> b;
	
	a--;
	b--;
	int cnt  = 0;
	while(a != b){
		a /= 2;
		b /= 2;
		cnt++;
	}
	
	if((1 << cnt) == n) cout << "Final!\n";
	else cout << cnt << '\n';
	
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
