
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x)  {cerr << '('; for (auto &i: x) cerr <<  (" "), __print(i); cerr << ')';}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

vector<long long> trial_division(long long n) {
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
	ll n; cin >> n;
	vector<ll> p_factors = trial_division(n);
	
	set<ll> s;
	ll prod = 1;
	
	for(auto val : p_factors){
		prod *= val;
		if(s.size() <= 1 && s.find(prod) == s.end()){
			s.insert(prod);
			prod = 1;
		}
	}
	
	if(prod == 1 || s.find(prod) != s.end()){
		cout << "NO\n"; return;
	}
	
	s.insert(prod);
	assert(int(s.size()) == 3);
	cout << "YES\n";
	for(auto val : s) cout << val << ' ';
	cout << '\n';
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
