	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll k,p;
	cin >> k >> p;
	
	// https://codeforces.com/contest/897/submission/110894868
	
	ll ans = 0;
	ll j = 1;
	for(int i = 0 ; i < k ; i++){
		string s1 = to_string(j);
		string s2 = to_string(j);
		reverse(s2.begin(), s2.end());
		string val = s1 + s2;
		ll num = stoll(val);
		num%=p;
		ans += num;
		ans%= p;
		j++;	
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
	return 0;
}
