#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)


int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,elem;
		cin >> n;
		vector<int> cnt(3,0);
		for(int i = 0; i < n ; i++) {
			cin >> elem;
			if(elem%3 == 0) cnt[0]++;
			else if(elem%3 == 1) cnt[1]++;
			else if(elem%3 == 2) cnt[2]++;
		}
		
		int ans = 0;
		int avg = (cnt[0] + cnt[1] + cnt[2])/3;
		
		dbg(cnt[0], cnt[1], cnt[2]);
		
		if(cnt[0] < avg){
			int rem = avg - cnt[0];
			if(cnt[2] > avg){
				cnt[2] -= rem;
				ans += rem;
				cnt[0] += rem;
			}
			
			else{
				cnt[1] -= rem;
				ans += 2*rem;
				cnt[0] += rem;
			}
		}
		
		if(cnt[1] < avg){
			int rem = avg - cnt[1];
			if(cnt[0] > avg){
				cnt[0] -= rem;
				ans += rem;
				cnt[1] += rem;
			}
			else{
				cnt[2] -= rem;
				ans += 2*rem;
				cnt[1] += rem;
			}
		}
		
		
		if(cnt[2] < avg){
			int rem = avg - cnt[2];
			if(cnt[1] > avg){
				cnt[1] -= rem;
				ans += rem;
				cnt[2] += rem;
			}
			else{
				cnt[0] -= rem;
				ans += 2*rem;
				cnt[2] += rem;
			}
		
		}
		
		cout << ans << '\n';		
	
	}
}
