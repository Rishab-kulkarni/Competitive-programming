#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	ll r,g,b,w;
	cin >> r >> g >> b >> w;
	int cnt_e = 0;
	if(r%2 == 0) cnt_e++;
	if(g%2 == 0) cnt_e++;
	if(b%2 == 0) cnt_e++;
	if(w%2 == 0) cnt_e++;
	// 3- even 1 -odd
	if(cnt_e >= 3){
		cout << "Yes\n"; return;
	}
	
	if(r > 0 && g > 0 && b > 0){
		r--, g--, b--;
		w += 3;
		cnt_e = 0;
		if(r%2 == 0) cnt_e++;
		if(g%2 == 0) cnt_e++;
		if(b%2 == 0) cnt_e++;
		if(w%2 == 0) cnt_e++;
		if(cnt_e >= 3) cout << "Yes\n";
		else cout << "No\n";		
	}
	
	else cout << "No\n";

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
