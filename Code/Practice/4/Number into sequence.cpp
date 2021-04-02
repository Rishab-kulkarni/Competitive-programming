
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin >> n;
	
	auto factorize = [] (ll n) -> map<ll,int>{
		map<ll,int> mp;
		for(ll d = 2 ; d*d <= n ; d++){
			while(n%d == 0){
				mp[d]++;
				n /= d;
			}
		}
		if(n > 1){
			mp[n]++;
		}
		return mp;
	};
	
	auto mp = factorize(n);
	vector<pair<ll,int>> a(mp.begin(), mp.end());
	sort(a.begin(), a.end(), [] (pair<int,int> a, pair<int,int> b){
		return a.second > b.second;
	});
	
	vector<ll> res(a[0].second -1, a[0].first);
	ll num = a[0].first;
	for(int i = 1 ; i < int(a.size()) ; i++){
		int tmp = a[i].second;
		while(tmp--){
			num *= a[i].first;
		}		
	}
	res.push_back(num);
	cout << res.size() << '\n';
	for(auto val : res) cout << val << ' ';  
	cout << '\n';
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

