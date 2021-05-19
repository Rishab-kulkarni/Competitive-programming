
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	bool ok = true;
	cin.ignore();
	for(int i = 0 ; i < n ; ++i){
		
		string name;
		getline(cin, name);
		
		int cnt = 0;
		for(auto ch : name){
			cnt += (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
		}
		ok &= (cnt == a[i]);
	}
	cout << (ok ? "YES" : "NO") << '\n';	
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
