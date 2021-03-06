#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	ll c; scanf("%lld",&c);
	int ans = 1, cnt = 0;
	while(ans <= c){
		ans *=2;
		cnt++;
	}
	ll magic = (ans/2) - 1;
	
	bitset<32>b1(c);
	bitset<32>b2(magic);
	
	bitset<32>b3(b1^b2);
	
	unsigned long val1 = b2.to_ulong();
	unsigned long val2 = b3.to_ulong();
	cout << val1*val2 << '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
	scanf("%d",&t);
	while(t--){
		solve();	
	}
}
