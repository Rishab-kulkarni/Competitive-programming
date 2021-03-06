#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	vector<int>a(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	if(*min_element(a.begin()+1, a.end()) > 1){
		cout << "Second\n"; return;
	}
	
	sort(a.begin() + 1, a.end());
	int cnt = 0;
	
	for(int i = 1 ; i <= n ; i++){
		if(a[i] > i){
			cout << "Second\n"; return;
		}
		cnt += (i - a[i]);			// val by which element to be increased -- to make a permutation
	}
	
	dbg(cnt);	
//	if(cnt == 0){
//		cout << "First\n"; return;
//	}
	
	cout << (cnt%2 == 0 ? "Second" : "First") << '\n';
	
//	cout << "First\n";
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
