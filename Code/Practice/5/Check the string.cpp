
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	
	bool ok = is_sorted(s.begin(), s.end());
	
	int cnt_a = count(s.begin(),s.end(), 'a');
	int cnt_b = count(s.begin(), s.end(), 'b');
	int cnt_c = count(s.begin(), s.end(), 'c'); 
	
	ok &= ((cnt_a == cnt_c || cnt_b == cnt_c)  && (cnt_c!=0 && cnt_a!=0 && cnt_b!=0));
	
	cout << (ok ? "YES" : "NO") << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
