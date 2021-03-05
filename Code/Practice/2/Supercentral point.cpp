#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
	
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		bool ok1 = false, ok2 = false, ok3 = false, ok4 = false;
		for(int j = 0 ; j < n; j++){
			if(i!=j){
				if(a[j].first > a[i].first && a[i].second == a[j].second) ok1 = true;
				if(a[j].first < a[i].first && a[i].second == a[j].second) ok2 = true;
				if(a[j].first == a[i].first && a[i].second > a[j].second) ok3 = true;
				if(a[j].first == a[i].first && a[i].second < a[j].second) ok4 = true;
			}
		}
		if(ok1 && ok2 && ok3 && ok4) cnt++;
	}
	cout << cnt << '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
