
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
	
	// select first num as greatest of both the nums
	int val = max(a[0].first, a[0].second);
	for(int i = 1 ; i < n ; i++){
		if(a[i].first <= val && a[i].second <= val){
			val = max(a[i].first, a[i].second); 
		}
		else if(a[i].first <= val){
			val = a[i].first;
		}
		
		else if(a[i].second <= val){
			val = a[i].second;
		}
		
		else if(a[i].first > val && a[i].second > val){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}

