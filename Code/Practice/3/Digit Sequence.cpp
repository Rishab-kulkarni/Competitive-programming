	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int k;
	cin >> k;
	
	string s;
	for(int i = 1 ; i <= 100000 ; i++){
		s += to_string(i);
	}
	
	k--;
	cerr << s.size() << '\n';
	cout << s[k] << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
}
