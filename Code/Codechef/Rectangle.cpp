#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n,m;
	cin >> n >> m;
	// vector<vector<int>>pos(n);
    vector<pair<int,int>> posis;
	for(int i = 0 ; i < n ; i++){
		string s; cin >> s;
		for(int k = 0 ; k < m ; k++){
			if(s[k] == '1'){
				posis.push_back({i+1, k+1});
			}
		}
	}
	
	vector<int> val;
	for(int i = 0 ; i < (int)posis.size() ; i++) val.push_back(posis[i].first);
	
	
	for(int i = 0 ; i < (int)val.size() - 1; i++){
		if(val[i+1] - val[i] > 1){
			cout << "NO\n"; return;
		}
	}
	
	
	int h[505] = {0};
	for(int i = 0 ; i < (int)posis.size() ; i++){
		h[posis[i].second]++;
	}
	
	int first_not_zero = -1;
	for(int i = 0 ; i < 505 ; i++){
		if(h[i]!=0) {
			first_not_zero = h[i];
			break;
		}
	}
	
	for(int i = 0 ; i < 505 ; i++){
		if(h[i] != first_not_zero && h[i]!=0){
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";	
   
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

