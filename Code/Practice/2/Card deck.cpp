#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		m[a[i]] = i + 1;
	}
	
//	vector<int> ans;
//	
	int tmp = m[n];
	for(int j = m[n] ; j <= n ; j++){
		cout << a[j-1] << ' '; 
	}
	for(int i = n -1; i >= 1 ; i--){
		int tmp2 = m[i];
		if(tmp2 > tmp) continue;
		for(int j = tmp2 ; j < tmp ; j++){
			cout << a[j-1] << ' ';
		}
		tmp = tmp2;		
	}
	
//	for(auto val : ans) cout << val << ' '; 
	cout << '\n';
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
