
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	string s,t; cin >> s >> t;
	
	int star = count(s.begin(), s.end(), '*');
	
	if(star == 0){
		cout << (s == t ? "YES" : "NO") << '\n'; return;
	}
	if(n - 1 > m ){
		cout << "NO\n"; return;
	}
	
	int j = 0;
	for(int i = 0 ; i < n ; ++i){
		if(s[i] != '*'){
			if(s[i] != t[j]){
				cout << "NO\n"; return;
			}
			else j++;
		}
		else break;
	}
	
	j = m-1;
	for(int i = n-1 ; i >= 0 ; i--){
		if(s[i] != '*'){
			if(s[i] != t[j]){
				cout << "NO\n"; return;
			}
			else j--;
		}
		else break;
	}
	
	cout << "YES\n"; 
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
// 	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
