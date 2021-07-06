
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = ( 1 << 30);

ll trial_divison(int num) {
	
	map<int,int> mp;
	for(int i = 2 ; i*i <= num ; ++i) {
		while(num%i == 0) {
			num /= i;
			mp[i]++;
		}
	}
	if(num > 1) mp[num]++;
	
	ll prod = 1;
	
	for(auto val : mp) {
		prod *= (val.second + 1);
		if(prod >= mod) prod -= mod;
	}
	return prod;
}



void solve() {
	int a,b,c;
	cin >> a >> b >> c;
	
	ll sum = 0;
	
	for(int i = 1 ; i <= a ; ++i) {
		for(int j = 1 ; j <= b ; ++j) {
			for(int k = 1 ; k <= c ; ++k) {
				sum += trial_divison(i*j*k);
				if(sum >= mod) sum -= mod;
			}
		}
	}
	cout << sum << '\n';
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}
