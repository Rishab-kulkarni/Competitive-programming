#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	int sum = 0;
	for(int i =1 ; i <= n ; i++){
		int x; cin >> x;
		sum += x;
	}
	
	
	int cnt = 0;
	int tmp = sum;
	for(int i = 1 ; i <= 5 ; ++i){
		tmp += i;
		
		if(tmp%(n+1) != 1){
			dbg(i); cnt++;
		}
		tmp -= i;
		assert(tmp == sum);
	}
	
	cout << cnt << '\n';
	
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
