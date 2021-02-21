#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		
		int ans = INT32_MAX - 1;
		
		for(int i = 0 ; i <= 100 ; i++){
			int tmp = b + i;
			if(tmp == 1) continue;
			int val = a, cnt = i;
			while(val!=0){
				val /= tmp;
				cnt++;
			}
			ans = min(ans, cnt);
		}
		
		cout << ans << endl;
	}
}
