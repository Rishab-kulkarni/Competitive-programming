

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

void solve() {
	ll a,b;
	cin >> a >> b;
	
	if(a == b){
		cout << 0 << '\n'; return;
	}
	
	vector<ll> v1 = trial_division1(a);
	vector<ll> v2 = trial_division1(b);
	
	ll prod1 = 1, prod2 = 1;
	for(auto val : v1) if(val != 2 && val!= 3 && val!= 5) prod1 *= val;
	for(auto val : v2) if(val != 2 && val!= 3 && val!= 5) prod2 *= val;
	
	if(prod1 == prod2){
		int cnt2 = 0, cnt3 = 0, cnt5 = 0;
		for(auto val : v1){
			if(val == 2) cnt2++;
			else if(val == 3) cnt3++;
			else if(val == 5) cnt5++;
		}
		
		for(auto val : v2){
			if(val == 2) cnt2--;
			else if(val == 3) cnt3--;
			else if(val == 5) cnt5--;
		}
		cout << abs(cnt2) + abs(cnt3) + abs(cnt5) << '\n';
	}
	else cout << -1 << '\n';
}


int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
