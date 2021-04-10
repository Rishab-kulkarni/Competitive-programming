
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;

	int h[26] = {0}; int odds = 0;
	for(auto val : s) h[val - 'A']++;
	
	for(int i = 0 ; i < 26 ; i++) odds += (h[i] & 1);
	
	
	if(odds > 1){
		cout << "NO SOLUTION\n"; return;
	}
	
	string ans;
	char odd_char = '*';
	for(int i = 0 ; i < 26 ; i++){
		if(!(h[i] & 1))ans += string(h[i]/2, i + 'A');
		else {
			odd_char = i + 'A';
		}
	} 
	
	if(odd_char != '*') ans += string(h[odd_char - 'A'], odd_char);
	for(int i = 25 ; i >=0 ; i--){
		if(!(h[i] & 1)) ans += string(h[i]/2, i + 'A');
	}
	
	cout << ans << '\n';
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
