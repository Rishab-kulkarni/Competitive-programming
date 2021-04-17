
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
	
	ll mx = -1;
	int idx = -1;
	for(int i = 0 ; i < k ; i++){
		if(n%a[i] == 0){
			cout << i + 1 << ' ' << n/a[i] << '\n';
			return;  	
		}
		if(n/a[i] >= mx){
			mx = n/a[i];
			idx = i+1;
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
