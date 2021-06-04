
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m; cin >> n >> m;
	string s; cin >> s;
	
	int mn = min(n,m);
	for(int i = 0 ; i < mn ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s[j] == '0'){
				if((j - 1 >= 0 && s[j-1] == '1') && (j+1 < n && s[j+1] == '0')){
					s[j] = '1'; break;
				}
				else if((j - 1 >= 0 && s[j-1] == '0') && (j+1 < n && s[j+1] == '1')){
					s[j] = '1'; break;
				}
			}
		}
	}
	
	cout << s << '\n';
	
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
