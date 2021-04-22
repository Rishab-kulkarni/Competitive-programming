
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){

	auto binpow = [] (ll val, ll i)->ll{
		ll prod = 1;
		while(i > 0){
			if(i & 1) prod *= val;
			val *= val;
			i /= 2;
		}
		return prod;
	};


	int n; cin >> n;
	unordered_map<ll,int> mp;
	vector<ll> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	
	vector<ll> s;
	for(int i = 0 ; i < 31 ; i++) s.push_back(binpow(2,i)); 
	
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		bool ok = false;
		for(int j = 0 ; j < 31 ; j++){
			if(mp.count(s[j] - a[i]) && (mp[s[j] - a[i]] > 1 || (mp[s[j] - a[i]] == 1 && s[j] != 2*a[i]))){
				ok = true;
			}
		}
		cnt += !ok;
	}
	cout << cnt  << '\n';
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
