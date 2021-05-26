
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	ll n, k;
	cin >> n >> k;
	
	vector<int> a(n);
	queue<int> q;
	for(auto &x : a){
		cin >> x;
		q.push(x);
	}
	
	if(k > n){
		cout << *max_element(a.begin(), a.end()) << '\n';
	}
	
	else{
		// simulate
		bool first = true;
		while(true){
			int now = q.front();
			q.pop();
			int cnt = 0;
			if(!first){
				cnt = 1;
			}else first = false;
			
			while(now > q.front() && cnt < k){
				cnt++;
				q.push(q.front());
				q.pop();
			}
			if(cnt >= k){
				cout << now << '\n';
				return;
			}
			q.push(now);
		}
		assert(false);	
	}
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
