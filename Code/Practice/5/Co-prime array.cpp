
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	int cnt = 0, i = 0;
	vector<int> ans;
	
	ans.push_back(a[i]);
	while(i < n-1){
		if(ans.back() != a[i]) ans.push_back(a[i]);
		if(gcd(a[i], a[i+1]) != 1){
			ans.push_back(1);
			cnt++;
		}
		ans.push_back(a[i+1]);
		i++;
	}
	
	cout << cnt << '\n';
	for(auto val : ans) cout << val << ' ';
	cout << '\n';
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
