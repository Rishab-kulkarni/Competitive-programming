
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {

	int n = 3;
	vector<string> s(n);
	vector<int> vals;
	
	int cnt_m = 0, cnt_s = 0, cnt_p = 0;
	
	for(int i = 0 ; i < n ; ++i){
		cin >> s[i];
		vals.push_back(s[i][0] - '0');
		if(s[i][1] == 'm') cnt_m++;
		else if(s[i][1] == 's') cnt_s++;
		else if(s[i][1] == 'p') cnt_p++;
	}
	
	if(cnt_m == 3 || cnt_s == 3 || cnt_p == 3){
		sort(vals.begin(), vals.end());
		if((vals[1] - vals[0] == 1 && vals[2] - vals[1] == 1) || (vals[0] == vals[1] && vals[1] == vals[2])){
			cout << 0 << '\n';
		}
		
		// only 1 to add
		else if( vals[1] - vals[0] <= 2 || vals[2] - vals[1] <= 2){
			cout << 1 << '\n';
		}
		else cout << 2 << '\n';
		
	}
	
	else if(cnt_m == 2 || cnt_s == 2 || cnt_p == 2){		// char same check diffs
		if(s[0][1] == s[1][1]){
			if(abs(s[0][0] - s[1][0]) <= 2) cout << 1 << '\n';
			else cout << 2 << '\n'; 
		}
		
		else if(s[1][1] == s[2][1]){
			if(abs(s[1][0] - s[2][0]) <= 2 ) cout << 1 << '\n';
			else cout << 2 << '\n'; 
		}
		
		else if(s[2][1] == s[0][1]){
			if(abs(s[2][0] - s[0][0]) <= 2) cout << 1 << '\n';
			else cout << 2 << '\n'; 
		}
		else assert(false);
	}
	else cout << 2 << '\n';
	
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
