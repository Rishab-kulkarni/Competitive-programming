#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s;
	getline(cin,s);
	set<char> s2;
	for(int i = 0 ; i < (int)s.length() ; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s2.insert(s[i]); 
	}
	
	
	cout << s2.size() << '\n';
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}		
}
