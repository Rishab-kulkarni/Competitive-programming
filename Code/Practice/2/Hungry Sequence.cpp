#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1e7 + 8;
vector<bool>is_prime(mxN,true);
vector<int> primes;

void sieve(){
	is_prime[0] = false, is_prime[1] = false;
	for(int i = 2 ; i*i < mxN ; i++){
		
		if(is_prime[i] ){
			
			for(int j = i*i ; j < mxN ; j+=i){
				is_prime[j] = false;
			} 
		}
	}
	
	for(int i =  0; i <mxN ; i++){
		if(is_prime[i]) primes.push_back(i);
	}
}


void solve(){
	int n; cin >> n;
	for(int i = 0 ; i < n ; ++i){
		cout << primes[i] << ' ';	
	}
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	sieve();
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
