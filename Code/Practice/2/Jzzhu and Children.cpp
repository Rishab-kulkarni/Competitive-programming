#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n,m; cin >> n >> m;
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	if(*max_element(a.begin(), a.end()) <= m){
		cout << n << '\n'; return;
	}
	
	// O(n^2)
	int idx = -1;
	while(true){
		bool ok = true;
		for(int i = 1 ; i<= n ; i++){
			if(a[i] == 0) continue;				// if chocolates given then he can go home, 
			else{
				ok = false;
				a[i] -= m;
				if(a[i] <= 0) a[i] = 0;
				idx = i;		// maintaining the idx of last child to be served 
			}
		}		
		
		if(ok){
			cout << idx << '\n'; return;
		}
	}
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
