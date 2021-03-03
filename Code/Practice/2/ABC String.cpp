#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(string str){
	int cnt = 0;
	for(int i = 0 ; i < (int)str.size() ; i++){
		if(str[i] == '(') cnt++;
		else cnt--;
		if(cnt < 0) return false;
	}
	if(cnt == 0) return true;
	return false;
}

void solve(){
	string s;
	cin >> s;
	int n = s.length();	
	if(s[0] == s[n - 1]){
		cout<<"NO\n"; return;
	}
	
	string c(n,'N');
	for(int i = 0 ; i < n ; i++){
		if(s[i] == s[0]) c[i] = '(';
		else if(s[i] == s[n-1]) c[i] = ')';
	}
	
	string val1 = c, val2 = c;
	for(int i = 0 ; i < n ; i++){
		if(c[i] == 'N'){
			val1[i] = '(';
		 	val2[i] = ')';
		 } 
	 }
	
	cout << ((check(val1) || check(val2)) ? "YES" : "NO") << '\n';	
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
