
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n,k;
	cin >> n >> k;
	
	vector<ll> a(k);
	for(int i = 0 ; i < k ; i++){
		cin >> a[i];
	}
	
	ll mn = LLONG_MAX - 1;
	ll mx = -1;
	int idx = -1;
	for(int i = 0 ; i < k ; i++){
		if(mn > n%a[i]){
			mx = n/a[i];
			idx = i+1;
			mn = n%a[i];
		}
	}
	cout << idx << ' ' << mx << '\n';
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
