#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int a,b,n;
	cin >> a >> b >> n;
	
	string s1 = to_string(a);
	string tmp = s1;
	
	int init_len = s1.size();
	
	for(int i = 1 ; i <= n ; i++){
		bool ok1 = false;
		for(int j = 0 ; j <= 9 ; j++){
			s1 += (j + '0');
			if(stoi(s1)%b == 0){
				ok1 = true; break;
			}
			else s1.pop_back();
		}
		if(ok1) break;		
	}
	
	int val = n - (int)s1.size() + init_len;
	if(val == n){
		cout << -1 << '\n'; return;
	}
	
	while(val--) s1.push_back('0');
	cout << s1 << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
