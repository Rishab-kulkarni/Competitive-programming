	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	
	vector<int>evens,odds;
	for(int i = 0 ; i < n ; ++i){
		int a; cin >> a;
		if(a%2) odds.push_back(a);
		else evens.push_back(a);
	}
	
	sort(evens.begin(), evens.end());
	sort(odds.begin(), odds.end());
	
	if(odds.size() > evens.size()) odds.pop_back();
	else if(evens.size() > odds.size()) evens.pop_back();

	while(!evens.empty() && !odds.empty()){
		evens.pop_back();
		odds.pop_back();
	}
	
	ll sum = 0;
	for(int i = 0 ; i < (int)evens.size() ; i++) sum += evens[i];
	for(int i = 0 ; i < (int)odds.size() ; i++) sum += odds[i];
	cout << sum << '\n';

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
