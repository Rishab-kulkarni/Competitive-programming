
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
//		int tmp = a[i];
//		a.erase(a.begin() + i);
		int sum1 = 0, sum2 = 0;
		int lo1 = 0, lo2 = 1;
		int hi1 =  
		
		
		
		cnt += (sum1 == sum2);
		a.insert(a.begin() + i, tmp);
	}
	cout << cnt << '\n';
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
