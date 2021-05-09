
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


vector<int> vals;

void solve(){	
	int n; cin >> n;
	
	int cnt = 0;
	for(int i = 0 ; i < int(vals.size()) ; i++){
		if(n < vals[i]) break;
		else cnt++;
	}
	cout << cnt << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);
	
	for(int i = 1 ; i <= 9 ; i++){
		for(int j = 1 ; j <= 9 ; j++){
			string s = string(i, j + '0');
			vals.push_back(stoi(s));
		}
	}
	
	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
