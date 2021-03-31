
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,m; 
	cin >> n >> m;
	vector<int> c(m);
	for(int i = 0 ; i < m ; i++) cin >> c[i];

	map<int,int>mp;
	int ans = 0;
	for(int i = 0 ; i < m ; i++){
		mp[c[i]]++;
		if((int)mp.size() == n){
			bool ok = true;
			int val = 1;
			for(auto it = mp.begin() ;  it!= mp.end() ; it++){
				ok &= (((*it).first == val) && (*it).second != 0);
				val++;
			}
			
			if(ok){
				for(auto it = mp.begin() ; it!= mp.end() ; it++){
					mp[(*it).first]--;
				}
			}
			ans += ok;
		}
	}
	cout << ans << '\n';
}


void solve_2(){
	
	// don't complicate stuff -- keep it simple
	int n,m;  cin >> n >> m;
	int h[1005] = {0};
	
	for(int i = 0 ; i < m ; i++){
		int x; cin >> x;
		h[x-1]++;
	}
	
	cout << *min_element(h, h + n) << '\n';
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

