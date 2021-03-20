
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,k;
	cin >> n >> k;
	vector<int> ids(n+1);
	for(int i = 1 ; i <= n ; i++) cin >> ids[i];
	
	ll val = 0;
	for(int i = (1 << 30) ; i >= 1 ; i >>= 1){
		if((val + i)*(val + i + 1)/2 < k){
			val += i;
		}
	}
	
	int res = k - (val)*(val + 1)/2;
	cout << ids[res] << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
	while(t--){
		solve();
	}
}
