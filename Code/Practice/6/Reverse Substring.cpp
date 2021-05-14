
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	
	for(int i = 0 ; i < n - 1 ; i++){
		if(s[i+1] < s[i]){
			cout << "YES\n";
			cout << i + 1 << ' ' << i+2 << '\n';
			return;
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
