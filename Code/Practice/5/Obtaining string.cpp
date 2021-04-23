
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// is possible in finite moves, greedily keep swapping till chars at particular idx become same
	int n; string s,t;
	cin >> n >> s >> t;
	
	map<char,int> m1,m2;
	for(int i = 0 ; i < n ; i++){
		m1[s[i]]++; m2[t[i]]++;
	}
	if(m1 != m2) cout << -1 << '\n';
	else{
		vector<int> ans;
		int i = 0 ;
		while(i < n){
			if(s[i] != t[i]){
				int j = i;
				int idx = find(s.begin() + j, s.end(), t[i]) - s.begin();
				while(idx != j){
					ans.push_back(idx);
					swap(s[idx], s[idx-1]);
					idx--;
				}
				assert(s[idx] == t[i]);
			}
			i++;
		}		
//		cerr << s << ' ' << t << '\n';
		cout << ans.size() << '\n';
		for(auto val : ans) cout << val << ' ';
		cout << '\n';
	}
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
