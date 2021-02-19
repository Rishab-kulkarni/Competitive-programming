#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	reverse(s.begin(), s.end());
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == ')') cnt++;
		else break;
	}
	
	cout << (cnt > n - cnt ? "Yes" : "No") << '\n';
	
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
