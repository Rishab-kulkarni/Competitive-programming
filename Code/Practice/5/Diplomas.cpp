
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n,k;
	cin >> n >> k;
	
	ll dips = n/(2*(k+1));
	ll certifs = k*dips;
	
	cout << dips << ' ' << certifs << ' ' << n - (certifs + dips) << '\n'; 
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
