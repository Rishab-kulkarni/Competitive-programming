
// not my original idea 
// https://codeforces.com/contest/1075/submission/116629839

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll MOD = 1e4 + 7;

void solve() {
	int n,m; cin >> n >> m;
	
	vector<int> a(n+m);
	for(int i = 0 ; i < n + m ; ++i) cin >> a[i];
	
	vector<int> taxi, rider;
	for(int i = 0 ;  i < n+m ; ++i){
		int x; cin >> x;
		if(x) taxi.push_back(a[i]);
		else rider.push_back(a[i]);
	}
	
	int j = 0;
	vector<int> ans(m, 0);
	for(int i = 0 ; i < n ; ++i){
		int diff = abs(taxi[j] - rider[i]);
		int diff2;
		while(j < m - 1){
			diff2 = abs(taxi[j+1] - rider[i]);
			if(diff2 >= diff) break;
			else{
				diff = diff2;
				j++;
			}
		}
		ans[j]++;
	}
	
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
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
