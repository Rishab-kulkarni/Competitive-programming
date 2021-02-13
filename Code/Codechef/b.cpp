#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int mxN = 100000;
vector<bool>is_prime(mxN, true);
vector<int> primes;

void sieve(){
	is_prime[1] = false;	
	for(ll i = 2 ; i*i <= mxN ; i++){
		if(is_prime[i]){
			for(ll j = i*i ; j <= mxN ; j+= i){
				is_prime[j] = false;
			}
		}
	}
	
	for(int i = 1 ; i <= mxN ; i++){
		if(is_prime[i]) primes.push_back(i);
	}
}

void solve(ll x, ll y){
		

}




int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> x >> y;
		solve(x,y);
	}
}
