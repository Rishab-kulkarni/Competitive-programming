
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

int main() {
	
	int n = 7, k = 4;
	
	int max_ans = -1;
	
	for(int mask = 0 ; mask < ( 1 << n) ; mask++) {
		vector<int> subset;
		for(int i = 0 ; i < n ; ++i) {
			if(mask & ( 1 << i)) {
				subset.push_back(i+1);
			}
		}
		
		if(int(subset.size()) == k){
			int _xor = subset[0];
			for(int i = 1 ; i < int(subset.size()) ; ++i) _xor ^= subset[i];
//			debug(_xor);
			debug(_xor, subset);
		}
		
		
	}
}
