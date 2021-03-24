	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n,p,q;
	cin >> n >> p >> q;
	string s; cin >> s;
	
	double val1, val2;
	bool ok = true;
	for(int i = 0 ;; i++){
		val1 = (double)(n - i*q)/ (double)p;
		if(val1 == floor(val1)){
			val2 = i;
			break;
		}
		if(val1 < 0){
			ok = false; break;
		}
	}
	
	if((!ok) || (val1 < 0) ){
		cout << -1 << '\n';
	}
	else{
		// add a lambda here dumbo
		cout << int(val1 + val2) << '\n';
		int tmp = 0;
		for(int i = 0 ; i < val1 ; i++){
			for(int i = tmp ; i < tmp + p ; i++) cout << s[i];
			cout << '\n';
			tmp += p; 
		}
		
		tmp = (int)val1*p;
		while(val2--){
			for(int i = tmp ; i < tmp + q ; i++) cout << s[i];
			cout << '\n';
			tmp += q; 
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
