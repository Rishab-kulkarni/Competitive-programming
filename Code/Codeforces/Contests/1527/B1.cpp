
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve(){
	int n; string s; 
	cin >> n >> s;
	
	int cnt_0 = count(s.begin(), s.end(), '0');
	assert(cnt_0 != 0);
	
	if(n == 1 || cnt_0 == 1){
		cout << "BOB\n"; return;
	}
	
	if(n & 1){
		if(s[n/2] == '0') cout << "ALICE\n";
		else cout << "BOB\n";
	}
	else{
		cout << "BOB\n";	
	}
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
