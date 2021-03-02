#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string p,h;
	cin >> p >> h;
	
	sort(p.begin(), p.end());
	int n = h.length();
	for(int i = 0 ; i < n ; i++){
		for(int j = 1 ; j <= n-i ; j++){
			string temp = h.substr(i,j);
			sort(temp.begin(), temp.end());
			if(temp == p){
				cout << "YES\n"; return;
			}			
		}
	}
	
	cout << "NO\n";
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
