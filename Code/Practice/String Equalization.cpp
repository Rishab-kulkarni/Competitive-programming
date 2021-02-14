#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;	
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		
		set<char> s;
		for(auto ch : s1) s.insert(ch);
		
		bool ok = false;
		for(auto ch : s2){
			if(s.find(ch) != s.end()){
				cout << "YES" << endl;
				ok = true; break;
			}
		}
		
		if(!ok) cout << "NO" << endl;
	}
}
