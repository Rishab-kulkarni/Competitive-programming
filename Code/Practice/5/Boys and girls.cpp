
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin >> n >> m;
	
	string ans = "";
	int val = n + m;
	bool ok = (n > m);
	for(int i = 0 ; i < val ; i++){
		if(ok){
			if( n > 0){
				ans += "B";
				n--;
			}
		}
		else{
			if(m > 0){
			 	ans += "G";
				m--;
			}
		}
		if(n!=0 || m!= 0) ok = !ok;
		if(n == 0) ok = false;
		if(m == 0) ok = true;
	}
	cout << ans << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);
	
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	
	
	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
