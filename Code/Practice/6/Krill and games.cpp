
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	ll l,r,x,y,k;
	cin >> l >> r >> x >> y >> k;
	
	for(int i = x ; i <= y ; i++){
		if(k*i >= l && k*i <= r){
			cout << "YES\n"; return;
		}
	}  
	cout << "NO\n";
}


int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
