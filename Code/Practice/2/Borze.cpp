#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	
	string s; cin >> s;
	string tmp;
	for(int i = 0 ; i < (int)s.size(); i++){
		tmp.push_back(s[i]);
		if(tmp == "."){
			cout << 0 ;
			tmp.clear();
		}
		
		else if(tmp == "-."){
			cout << 1;
			tmp.clear();
		}
		
		else if(tmp == "--"){
			cout << 2;
			tmp.clear();
		}
	}
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
