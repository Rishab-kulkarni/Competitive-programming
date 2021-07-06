
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 1e10 + 50000;
const ll MOD = 1e9 + 7;
vector<ll> nums;
vector<ll> pref;

template<typename T>
std::ostream& operator<<(std::ostream &stream, vector<T> &v) {
	int n = v.size();
	
	for(int i = 0 ; i < n ; ++i) {
		stream << v[i] << ' ';
	}
	return stream;
}


// https://www.geeksforgeeks.org/generate-palindromic-numbers-less-n/
ll createPalindrome(ll input, ll b, bool isOdd){
	ll n = input;
	ll palin = input;

	if (isOdd)
		n /= b;

	while (n > 0){
		palin = palin * b + (n % b);
		n /= b;
	}
	return palin;
}


void generatePalindromes(ll n){
	ll number;
	ll i = 1;
	
	pref.emplace_back(1);
	
	while ((number = createPalindrome(i, 10, 1)) < n) {
			pref.emplace_back(pref.back() + number);
			nums.emplace_back(number);
			i++;
	}
}

void solve() {

	int L,R;
	cin >> L >> R;
	
	--L;
	--R;
	
	
	auto bin_exp = [] (ll base, ll exp) -> ll {
		
		ll prod = 1;
		
		while(exp > 0) {
			if(exp & 1) { 
				prod  = prod*base%MOD;
			}
			base = base*base%MOD;
			exp >>= 1;
		}
		return prod;
	}; 
	

	
	ll sum  = pref[R+1] -  pref[L+1];
	cout << bin_exp(nums[L], sum)%MOD << /**' ' << bin_exp(nums[L], sum2)%MOD <<**/ '\n';
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	generatePalindromes(N);
	
	cerr << "pref = " << pref.size() << endl;

	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
