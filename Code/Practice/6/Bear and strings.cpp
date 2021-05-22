
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	int n = s.size();
	
	int cnt = 0;
	
	int idx = -1;
	
	for(int i = 0 ; i + 3 < n ; i++){
		if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r'){
			cnt += ((i - idx)*(n - i - 3));
			idx = i;			
		}
	}
	cout << cnt << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
