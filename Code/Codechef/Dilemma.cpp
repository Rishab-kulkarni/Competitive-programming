#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s;
	cin >> s;
	
	set<char>st;
	for(auto ch : s) st.insert(ch);
	
	cout << ((int)st.size() == 3 ? "YES" : "NO") << '\n';

}


int main(){

	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}
