#pragma GCC optimize("O2")
 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
 
ll power(ll a, ll b){
	ll ans = 1;
	for(int i = 0 ; i < b ; i++){
		ans = ans*a % MOD;
	}
	
	return ans;
}
 
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;
	cin >> n;
	
	cout << power(2,n) << endl;
		
		
	return 0;
}
