
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> neg, pos;
	for(int i = 0 ; i < n ; i++){
		int x; cin >> x;
		if(x < 0){
			neg.push_back({x,i});
		}
		else{
			pos.push_back({x,i});
		}
	}
	
	
	
	
	
	
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
