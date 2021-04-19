
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,x;
	cin >> n >> x;
	
	map<int,int> mp;
	for(int i = 0 ; i < n ; i++){
		int elem; cin >> elem;
		mp[elem]++;
	}
	int req = n;

	int cnt = 0;
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		if(req > x){
			cnt++;
			mp[(*it).first]--;
			req--;	
		}
		if(req <= x) break;
	}
	cout << cnt << '\n';
	
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
    	solve();
	}
}

