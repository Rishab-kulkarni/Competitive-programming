#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;cin >> n;
	
	vector<string> s(n);
	for(auto &val : s) cin >> val;
	bool running = false;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == "start"){
			if(!running) running = true;
//			else {cout << "404\n"; return;}
		}
		
		else if(s[i] == "stop"){
			if(!running) {cout << "404\n"; return;}
			else running = false;
		}
		
		else if(s[i] == "restart"){
			if(!running) running = true;
		}
	}
	cout << "200\n";
}


int main(){

	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}
