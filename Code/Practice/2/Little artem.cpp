#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n, m;
	cin >> n >> m;
//	
//	int bs = (n*m + 2)/2;
//	int ws = (n*m - 1)/2;
	
	bool ok = true;
//	char s[n][m];
	for(int i =1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			if(i == n && j ==  m) {
				cout << "W";
				break;
			}
			if(ok) cout << "B";
			else cout << "W";
		}
		cout << '\n';
		ok = !ok;
	}
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}




