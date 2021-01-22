#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int n = 1e7 + 5;

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
    
    for(int i = 2 ; i <= 1000000 ; i++){
    	if(primes[i]) ans.push_back(i);
    }
    
    
    
}


void solve(){
    clock_t start = clock();
    int d;
    cin >> d;
    
    
    
    // ll ans = (1)*(1 + d)*(1 + (2*d))*(1 + (3*d));
    // cout << ans << endl;
    
    if(d == 1){
        cout << 6 << endl;
        return;
    }
    
    if(d == 2){
        cout << 15 << endl;
        return;
    }
    
    int val = -1;
  
    for(auto v : ans){
    	if(v > d){
    		val = v;
    		break;
    	}
    }     

	
//	for(auto v : ans){
//		cout << v << ' '; 
//	}

	

//	cout << ans.size();
//	return;
	cout << val << endl;
    
    
    ll ans = (ll)(pow(val,3) + 0.5);
    cout << ans << endl;
    
//	cerr << (clock() - start)/CLOCKS_PER_SEC << endl;
    
}

void solve_2(){
	int d;
	cin >> d;
	
	int idx1 = lower_bound(ans.begin(), ans.end(), d+1) - ans.begin();
	int idx2 = lower_bound(ans.begin(), ans.end(), ans[idx1] + d) - ans.begin();
	
	cout << ans[idx1]*ans[idx2] << endl;
}





int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();	
		
	int t;
	cin >> t;
	while(t--){
		solve_2();	
	}
	return 0;
}
