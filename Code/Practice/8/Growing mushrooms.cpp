
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
	int n,t1,t2,k;
	cin >> n >> t1 >> t2 >> k;
	
	vector<pair<int,ld>> ans;
	
	for(int i = 0 ; i < n ; ++i) {
		int x,y; cin >> x >> y;
		int mn = min(x,y);
		int mx = max(x,y);
		
		ld score1 = mn*t1;
		score1 -= ((ld)k/(ld)100)*score1; 
		score1 += mx*t2;
		
		
		ld score2 = mx*t1;
		score2 -= ((ld)k/(ld)100)*score2;
		score2 += mn*t2;
		
		ans.push_back({i+1, max(score1, score2)});
	}
	
	cout << fixed << setprecision(2);
	
	sort(ans.begin(), ans.end() , [] (pair<int,ld> p1, pair<int,ld> p2) -> bool{
		if(p1.second == p2.second) {
			return (p1.first < p2.first);
		}
		return (p1.second > p2.second);
	});
	
	for(auto val : ans) {
		cout << val.first << ' ' << val.second << '\n';
	}
	
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}
