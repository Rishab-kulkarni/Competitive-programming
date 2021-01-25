#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = int(1e6) + 5;
vector<bool>is_prime(mxN,true);
vector<int> primes;
vector<int> ans(mxN);

void sieve(){
    
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2 ; i*i <= mxN ; i++){
        if(is_prime[i]){
        	for(int j = i*i ; j <= mxN ; j+=i){
                is_prime[j] = false;
            }
        }
    }
    for(int i = 2 ; i <= mxN ; i++){
    	if(is_prime[i]) primes.push_back(i);
    }
}


void precompute(){
		int cnt = 0;
		int j = 2;
		
		while(j <= mxN){
			if(is_prime[j-2] && is_prime[j]) cnt++;
			ans[j] = cnt;
			j++;
		}
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	clock_t start = clock();
	
	sieve();
	precompute();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ans[n] << '\n';		
	}
//	cerr << clock() - start << endl;	
}
