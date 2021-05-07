
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// if for each pair of elements the difference b/w them is %d == 0, then ans possible
	// else -1
	int n,m,d;
	cin >> n >> m >> d;
	vector<int> a;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			int x; cin >> x;
			a.push_back(x);
		}
	}
	
	// now brute force and check for each pair of indices
	sort(a.begin(), a.end());
	for(int i = 0 ; i < n*m ; i++){
		for(int j = 0 ; j < n*m ; j++){
			if(abs(a[i] - a[j])%d != 0){
				cout << -1 << '\n';
				return;
			}
		}
	} 
	
	int md = (n*m)/2;
	int cnt = 0;
	for(int i = 0 ; i < n*m ; i++){
		cnt += abs(a[i] - a[md])/d;
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
