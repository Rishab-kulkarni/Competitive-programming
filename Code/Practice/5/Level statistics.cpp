
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].first >> a[i].second;
	}
	
	int init1 = 0, init2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i].first < init1 || a[i].second < init2 || a[i].second - init2 > a[i].first - init1){
			cout << "NO\n";
			return;
		}
		init1 = a[i].first;
		init2 = a[i].second; 		
	}
	cout << "YES\n";
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
