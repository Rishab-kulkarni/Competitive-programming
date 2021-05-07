
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void brute(int n, int m){
	int ans = 0;
	
	// brute force
	vector<pair<int,int>> v;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++){
			if(((m % i))==((m % j) % i)){
//				v.push_back({i,j});
				ans++;
			}
		}
	}
	
//	for(auto val : v) cout << val.first << ' ' << val.second << '\n';
	
	
 	cout << ans << '\n';
}

void solve(){
	
	int n, m;
	cin >> n >> m;
	
	brute(n,m);
//	cout << (3%5) << endl;		
	
	// no of b's >= m, if (m > n) 
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}

