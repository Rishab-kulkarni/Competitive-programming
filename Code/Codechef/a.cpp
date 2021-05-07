
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
	
	
	if(empty == 0){
		
	}
	
	
	if(x == 0 && o == 0){
		cout << 3 << '\n';
		return;
	}
	
	if(x < o){
		cout << 3 << '\n';
		return;
	}
	
	if(abs(x - o) > 1){
		cout << 3 << '\n';
		return;
	}
	
	
	
	// for unreachable state - 3
		// if X or O is winner on both (row and col) or (col and diag) or (row and diag) 
		// if X and O both are winners on (row and row) or (row and col) or (col and col) or (col and row) or 
	
	for(auto ch : {'X', 'O'})
	 if((row(s, ch) && col(s,ch)) || (col(s,ch) && (diag(s, ch) || crossdiag(s,ch))) || (row(s,ch) && (diag(s, ch) || crossdiag(s,ch)))){
	 	cout << 3 << '\n';
	 	return;
	 }
	
	if((row(s,'X') && row(s,'O')) || (row(s,'O') && row(s,'X')) || (col(s,'X') && col(s,'O')) || (col(s,'O') && col(s,'X')) || (row(s,'X') 				&& col(s,'O')) || ((row(s,'O') && col(s,'X')))){
		cout << 3 << '\n';
		return;
	}
	
	if(row(s,'X') || row(s,'O') || col(s,'X') || col(s,'O') || diag(s, 'X') || diag(s, 'O') || crossdiag(s,'X') || crossdiag(s, 'O')){
		cout << "hi" << '\n';
		cout << 1 << '\n';
		return;
	}
	
	if(empty >= 1){
		cout << 2 << '\n';
	} else{
		cout << "hi" << endl;
		cout << 1 << '\n';
	}
	
	
	// after these conditions the possible answers can be 1 or 2
	// if atleast one _ is present and none of them are winners then ans is 1 else 2
	
//X_X
//OOO
//X__
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

