

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		m[x]++;
	}
	
	int cnt = -1;
	for(auto it : m){
		cnt = max(cnt,it.second); 
	}
	
	cout << n - cnt << '\n';
}


int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
