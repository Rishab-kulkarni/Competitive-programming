

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {

	vector<string> s(3);
	int x = 0, o = 0, empty = 0, xwins = 0, ywins = 0;
	
	for(int i = 0 ; i < 3 ; i++){
		string tmp; cin >> tmp;
		s[i] = tmp;
		x += count(s[i].begin(), s[i].end(), 'X');
		o += count(s[i].begin(), s[i].end(), 'O');
		empty += count(s[i].begin(), s[i].end(), '_');
	}
	
	
	
	if(x < o || abs(x - o) > 1){
		cout << 3 << '\n';
		return;
	}
	
	
	// check for each row
	for(int i = 0 ; i < 3 ; i++){
		if(s[i][0] == s[i][1] && s[i][1] == s[i][2]){
			if(s[i][0] == 'X') xwins++;
			else if(s[i][0] == 'O') ywins++;
		}
	}
	
	// check for each column
	for(int i = 0 ; i < 3 ; i++){
		if(s[0][i] == s[1][i] && s[1][i] == s[2][i]){
			if(s[0][i] == 'X') xwins++;
			else if(s[0][i] == 'O') ywins++;
		}
	}
	
	
	// diagonal and cross diagonal	
	xwins += ((s[0][0] == s[1][1] && s[1][1] == s[2][2]) && s[0][0] == 'X');
	ywins += ((s[0][0] == s[1][1] && s[1][1] == s[2][2]) && s[0][0] == 'O');
	
	xwins += ((s[0][2] == s[1][1] && s[2][0] == s[1][1]) && s[1][1] == 'X');
	ywins += ((s[0][2] == s[1][1] && s[2][0] == s[1][1]) && s[1][1] == 'O');
		
	
	// abs(x - o) == 1 , when x wins
	if(x > o && xwins == 1 && ywins == 0){
		cout << 1 << '\n'; return;
	}
	if(x == o && xwins == 0 && ywins == 1){
		// O wins num of x = num of o, 
		cout << 1 << '\n'; return;
	}
	
	
	if(empty == 0 ){
		if(xwins == ywins && xwins == 0){
			cout << 1 << '\n'; return;
		}
		if(xwins == 2){
			cout << 1 << '\n'; return;
		} 
	}
	
	else{
		if(xwins == 0 && ywins == 0) {
			cout << 2 << '\n'; return;
		}
	}
	cout << 3 << '\n';
}


int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
