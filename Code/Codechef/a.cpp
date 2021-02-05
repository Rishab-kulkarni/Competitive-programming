#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<ll> a(n);
		for(int i = 0; i < n ; i++) cin >> a[i];
		
		ll val1 = *max_element(a.begin(), a.end());
		ll val2 = *min_element(a.begin(), a.end());
		ll val = 2*(val1 - val2);
		ll ans = max(0LL, val);
		cout << ans << endl;
	}	
}
