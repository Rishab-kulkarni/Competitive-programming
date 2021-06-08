
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	
	int n,m; cin >> n >> m;
	string s; cin >> s;
	
	// brute
	
/*	for(int i = 0 ; i < m ; ++i){
		char x,y;
		cin >> x >> y;
		
		for(int i = 0 ; i < n ; ++i){
			if(s[i] == x) s[i] = y;
			else if(s[i] == y) s[i] = x;
		}
	}
	cout << s << '\n';	*/
	
	int h[26] = {0};
	int h2[26] = {0};
	for(int i = 0 ; i < 26 ; ++i) h[i] = i;
	
	for(int i = 0 ; i < m ; ++i){
		char x,y; cin >> x >> y;
		swap(h[x - 'a'], h[y - 'a']);
	}
	
	for(int i = 0 ; i < 26 ; ++i){
		h2[h[i]] = i;
	}
	
	
	for(int i = 0 ; i < n ; ++i){
		s[i] = h2[s[i] - 'a']  + 'a';
	}
	cout << s << '\n';
	
	
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}
