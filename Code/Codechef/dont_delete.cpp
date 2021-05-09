
// fuck off to the problem setter
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


bool row(vector<string> s, char ch){
	for(int i = 0 ; i < 3 ; i++){
		bool ok = true;
		for(int j = 0 ; j < 3 ; j++){
			ok &= (s[i][j] == ch);
		}
		if(ok) return true;
	}
	return false;
}

bool col(vector<string> s, char ch){				// this is bad
	for(int j = 0 ; j < 3 ; j++){
		bool ok = true;
		for(int i = 0 ; i < 3 ; i++){
			ok &= (s[i][j] == ch);
		}
		if(ok) return true;
	}
	return false;
}

bool diag(vector<string> s, char ch){
	bool ok = true;
	for(int i = 0 ; i < 3 ; i++){
		ok &= (ch == s[i][i]);
	}
	return ok;
}


bool crossdiag(vector<string> s, char ch){
	bool ok = true;
	for(int i = 0 ; i < 3 ; i++){
		ok &= (ch == s[i][3-1-i]);
	}
	return ok;
}


void solve(){
	vector<string> s(3);
	for(int i = 0 ; i < 3 ; i++){
		cin >> s[i];
	}
	
	int x = 0, o = 0, empty = 0;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			x += (s[i][j] == 'X');
			o += (s[i][j] == 'O');
			empty += (s[i][j] == '_');
		}
	}
	
	if(x < o || abs(x-o) > 1){
		cout << 3 << '\n';
		return;
	}

	// for unreachable state - 3
		// if X or O is winner on both (row, row) (col, col) 
	if(empty == 0){
		if((row(s, 'X') && row(s, 'O')) || (col(s, 'X') && col(s, 'O'))){
			cout << 3 << '\n';
		}
		else{
			if(row(s,'X') || row(s, 'O') || col(s, 'X') || col(s, 'O') || diag(s, 'X') || diag(s, 'O') || crossdiag(s, 'X') || 						crossdiag(s, 'O')){
				cout << 1 << '\n';
			}
			else cout << 1 << '\n';					// this makes no sense lmao
		} 
	}
	
	else {
		if((row(s, 'X') && row(s, 'O')) || (col(s, 'X') && col(s, 'O'))){
			cout << 3 << '\n';
			return;
		}
		
		// check empty spaces parity
			// if empty spaces == even then no of 'X' - no of 'O' == 1
				// check for whether x has won or y has won -> true then ans = 1
				// if none of them have won -> then ans = 2 
			// else if empty == odd then no of 'X' == no of 'O'
				// check whether if x has won or y has won -> true then ans = 1
				// if none of them have won -> then ans = 2
			
		if(empty & 1){
			if(x - o != 0){
				cout << 3 << '\n'; return;
			}
			else{
				if(row(s,'X') || row(s, 'O') || col(s, 'X') || col(s, 'O') || diag(s, 'X') || diag(s, 'O') || crossdiag(s, 'X') || 						crossdiag(s, 'O')){
						cout << 1 << '\n';
				}
				else cout << 2 << '\n';
				
			}
		}
		else{
			if(x - o != 1){
				cout << 3 << '\n'; return;
			}
			else{
				if(row(s,'X') || row(s, 'O') || col(s, 'X') || col(s, 'O') || diag(s, 'X') || diag(s, 'O') || crossdiag(s, 'X') || 						crossdiag(s, 'O')){
						cout << 1 << '\n';
				}
				else cout << 2 << '\n';
			}
		}		
	}	
}
	

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}

/*
XOX
XXO
OXO
*/


