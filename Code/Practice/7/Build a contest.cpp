
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
	int n,m;
	cin >> n >> m;
	
	vector<int> a(m);
	for(int i = 0 ; i < m ; ++i) cin >> a[i];
	
	map<int,int> mp; string ans;
	for(int i = 0 ; i < m ; i++){
		mp[a[i]]++;
		if(int(mp.size()) == n){
			ans.push_back('1');
			for(int i = 0 ; i < n ; ++i){
				mp[i+1]--;
				if(mp[i+1] == 0){
					mp.erase(mp.find(i+1));
				}
				debug(mp);
				debug(mp.size());
//				return;
			}
			
		}
		else{
			ans.push_back('0');
		}
	}
	cout << ans << '\n';
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
