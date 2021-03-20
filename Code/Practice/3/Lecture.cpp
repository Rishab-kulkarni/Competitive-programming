
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin >> n >> m;
	map<string,string> mp;
	for(int i = 0 ; i < m ; i++){
		string a, b;
		cin >> a >> b;
		mp[a] = b;
	}	
	
	vector<string> s(n);
	for(int i = 0 ; i < n ; i++) cin >> s[i];	
	
	for(int i = 0 ; i < n ; i++){
		auto it = mp.find(s[i]);
		if((*it).first.length() <=  (*it).second.length()){
			cout << (*it).first << ' ';
		}
		
		else cout << (*it).second << ' ';
	}
	
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
	while(t--){
		solve();
	}
}
