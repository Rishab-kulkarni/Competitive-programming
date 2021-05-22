
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin >> n;

	ll val = sqrtl(n);
	vector<ll> factors;
	for(int i = 1 ;  i <= val ; ++i){
		if(n%i == 0){
			if(n/i == i){
				factors.push_back(i); 
			}
			else {
				factors.push_back(n/i);
				factors.push_back(i);
			}
		}
	}
	sort(factors.begin(), factors.end());
	cout << factors[(int)factors.size() - 2] << ' ' << n - factors[(int)factors.size() - 2] << '\n';
	
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
