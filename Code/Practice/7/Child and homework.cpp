
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {	
	const int n = 4;
	vector<string> s(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> s[i];
//		cout << s[i] << endl;
	}
	
	int ok = 0,idx = -1;
	for(int i = 0 ; i < n ; ++i){
		int cnt1 = 0;
		for(int j = 0 ; j < n ; ++j){
			if(i != j){
				int val1 = s[i].length() - 2;
				int val2 = s[j].length() - 2;
				if(2*val1 <= val2) cnt1++;
				if(val1 >= 2*val2) cnt1--;
			}
		}
		if(abs(cnt1) == 3){
			idx = i;
			ok++;
		}
	}
	
	cout << (ok == 1 ? char('A' + idx) : 'C') << '\n';
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
