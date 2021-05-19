
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

void solve() {
	int n, k; string s;
	cin >> n >> k >> s;
	
	vector<pair<char,int>> pos;
	for(int i = 0 ; i < n ; i++){
		pos.push_back({s[i], i});
	}
	
	sort(pos.begin(), pos.end());
	

	
	sort(pos.begin() + k, pos.end(), [] (pair<char,int> &p1, pair<char,int> &p2)-> bool{
		return p1.second < p2.second;
	});
	
	for(int i = k ; i < n ; i++){
		cout << pos[i].first;
	}
	cout << '\n';
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
