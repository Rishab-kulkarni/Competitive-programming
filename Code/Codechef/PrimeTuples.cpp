#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool>primes(1000005,true);
vector<int> ans;
void sieve(){
    
    primes[0] = primes[1] = false;
    
    for(int i = 2 ; i*i <= 1000000 ; i++){
        if(primes[i]){
        	for(int j = i*i ; j <= 1000000 ; j+=i){
                primes[j] = false;
            }
        }
    }
    for(int i = 2 ; i <= 100000 ; i++){
    	if(primes[i]) ans.push_back(i);
    }
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	clock_t start = clock();
	
	sieve();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int val = ans.size();
		int cnt = 0;
		
		int i = 0, j = 1;
		
//		cout << (primes[17] ? "prime " : "not") << endl;
//		O(n) + O(nloglogn)

		while(j < val && ans[j] <= n-2){
			int sum = ans[0] + ans[j];
			if(primes[sum] && sum <= n){
				cnt++;
			}
			
			if(sum > n) break;
			j++;
		}
		cout << cnt  << '\n';
	}
}
