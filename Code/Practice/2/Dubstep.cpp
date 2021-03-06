#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
//	int n = s.size();
	regex pattern("WUB");
	
	cout << regex_replace(s, pattern, " ");
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
