
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){

	string s,t;
	cin >> s >> t;
	int m = s.size();
	int n = t.size();
	
	vector<pair<char,int>> v1;
	char tmp;
	int cnt = 0;
	for(int i = 0 ; i < m ; i++){
		if(s[i] == s[i+1]){
			tmp = s[i];
			cnt++;
		}
		else{
			tmp = s[i];
			cnt++;
			v1.push_back(make_pair(tmp, cnt));
			cnt = 0;
		}
	}
	
	
	vector<pair<char,int>> v2;
	
	cnt = 0;
	for(int i = 0 ; i < n ; i++){
		if(t[i] == t[i+1]){
			tmp = t[i];
			cnt++;
		}
		else{
			tmp = t[i];
			cnt++;
			v2.push_back(make_pair(tmp, cnt));
			cnt = 0;
		}
	}
	bool ok = (v1.size() == v2.size());
	if(ok){
		for(int i = 0 ; i < (int)v1.size() ; i++){
			ok &= ((v2[i].first == v1[i].first) && (v2[i].second >= v1[i].second));
		}
	
	}
	cout << (ok ? "YES" : "NO") << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
