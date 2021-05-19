
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	
	string s;
	cin >> s;
	
	int cnt = 0;
	while(int(s.length()) != 1){
		int sum = 0;
		for(int i = 0 ; i < (int)s.length() ; i++){
			sum += (s[i] - '0');
		}
		s = to_string(sum);
		cnt++;
	}
	cout << cnt << '\n';
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
