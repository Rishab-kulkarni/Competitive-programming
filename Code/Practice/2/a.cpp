#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s;
	cin >> s;
	int n = s.length();	
	if(s[0] == s[n - 1]){
		cout<<"NO\n"; return;
	}
	
	int cnt;
	bool ok = true;
	// iterating over all possibilites  
	for(int val = -1 ; val < 2 ;val+=2){
		cnt = 1;

		for(int i = 1 ;i < n ; i++){
			if(s[i] == s[0]) cnt++;
			else if(s[i] == s[n - 1]) cnt--;
			else {
				cnt += val;
			}
		}
		
		cout << cnt << '\n';
		if(cnt == 0) {
			ok = false;
			break;
		}				
	}
	cout << (!ok ? "YES" : "NO") << '\n';	
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
