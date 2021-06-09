
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> even, odd;
	
	for(int i = 0 ; i < n ; ++i) {
		int x; cin >> x;
		(x & 1 ? odd : even).push_back(x);
	}
	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end());
	
	ll score_a = 0, score_b = 0; int chances = 0;
	bool ok = true;
	
	while(even.size() > 0 || odd.size() > 0) {
		ll even_val = 0, odd_val = 0;
		
		if(!even.empty()){
			even_val = even.back();
		}
		if(!odd.empty()) {
			odd_val = odd.back();
		}
		
		if(ok) {
			if(even_val > odd_val) {
				score_a += even_val;
				even.pop_back();
			}
			else odd.pop_back();
		}
		
		else {
			if(even_val < odd_val) {
				score_b += odd_val;
				odd.pop_back();
			}
			else even.pop_back();
		}
		ok = !ok;
	}
	
	if(score_a > score_b) cout << "Alice\n";
	else if(score_a < score_b) cout << "Bob\n";
	else cout << "Tie\n";
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
