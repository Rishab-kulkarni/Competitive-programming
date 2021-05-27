
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> q[i];
	set<int> s1, s2;
	
	for(int i = 1 ; i <= n ; ++i){
		s1.insert(i);
		s2.insert(i);
	}
	
	vector<int> lexMin(n), lexMax(n);
	lexMin[0] = q[0];
	lexMax[0] = q[0];
	s1.erase(q[0]);
	s2.erase(q[0]);
	
	for(int i = 1 ; i < n ; i++){
		auto pos = s1.find(q[i]);
		if(pos != s1.end()){
			lexMin[i] = *pos;
			s1.erase(pos);
		}
		else{
			lexMin[i] = *s1.begin();
			s1.erase(s1.begin());
		}	
	}
	
	for(int i = 1 ; i < n ; ++i){
		auto pos = s2.find(q[i]);
		if(pos != s2.end()){
			lexMax[i] = *pos;
			s2.erase(pos);
		}
		
		else{
			pos = s2.lower_bound(q[i]);
			pos--;
			lexMax[i] = *pos;
			s2.erase(pos);
		}
	}
	
	for(auto val : lexMin) cout << val << ' ';
	cout << '\n';
	for(auto val : lexMax) cout << val << ' ';
	cout << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
