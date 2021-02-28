#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	string s;
	cin >> s;
	int h[26] = {0} , n = s.length();
	
	for(int i = 0 ; i < n ; ++i) h[s[i] - 'a']++;
	
	int cnt_even = 0, cnt_odd = 0, singles = 0;
	for(int i = 0 ; i < 26 ; i++){
		if(h[i] > 0 && h[i]%2 == 0){
			cnt_even += h[i]/2;
		}
		else if(h[i]%2 == 1 && h[i] > 3) cnt_odd += (h[i]/2 - 1);
		else if(h[i] == 1) singles++;
	}
	
	if(cnt_odd + cnt_even  >= singles){
		cout << "YES\n";
	}
	else cout << "NO\n";

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

