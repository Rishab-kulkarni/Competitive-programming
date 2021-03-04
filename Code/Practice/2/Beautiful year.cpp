#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(){
	int x; cin >> x;
	x++;
	while(true){
		set<char>s;
		string tmp = to_string(x);
		for(auto val : tmp) s.insert(val);
		
		if(s.size() == 4) break;
		else x++;
	}
	
	cout << x << '\n';	
	
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
