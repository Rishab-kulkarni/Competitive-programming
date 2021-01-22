#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; string b;
	cin >> n >> b;
	
	string c;
	if(b[0] == '1') c.push_back('2');
	if(b[0] == '0') c.push_back('1');
	
	for(int i = 1 ; i < n ; i++){
		if(b[i] == '0'){
			if(c[i-1] == '1') c.push_back('0'); 
			else c.push_back('1');
		}
		if(b[i] == '1'){
			if(c[i-1] == '2') c.push_back('1');
			else if(c[i-1] == '1') c.push_back('2');
			else if(c[i-1] == '0') c.push_back('2');
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		cout << c[i] - b[i] ;	
	}
	cout << endl;
	
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		solve();	
	}
	
	return 0;
}
