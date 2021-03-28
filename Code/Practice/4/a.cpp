
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	
	int n = s.size();
	string ans = "";
	
	for(int i = 0 ; i < n ; ){
		if(s[i] == s[i+1]){
			i+= 2;
		}
		else{
			ans += s[i];
			i++;
		}		
	} 
	
	sort(ans.begin(), ans.end());
	auto val = unique(ans.begin(), ans.end());
	cout << string(ans.begin(), val) << '\n';
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

