
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	
	vector<int> a(n);
	ll sum = 0;
	for(int i = 0; i < n ; ++i){
		cin >> a[i];
		sum += a[i];		
	}
	
	if(sum >= n) {
		cout << abs(sum - n) << '\n';
	}
	else if(sum < n) {
		cout << 1 << '\n';
	}
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	auto start = std::chrono::steady_clock::now();
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed = end - start;
	cerr << "Time : " << elapsed.count() << "ms" << '\n';
}
