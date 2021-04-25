
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// mark all the elements greater than > t
	int n,t,c;
	cin >> n >> t >> c;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	vector<int> points;
	points.push_back(-1);
	for(int i = 0 ; i < n ; i++){
		if(a[i] > t) points.push_back(i);
	}
	points.push_back(n);
	
	ll cnt = 0;
	
	for(int i = 0 ; i < (int)points.size()-1 ; i++){
		if(c <= points[i+1] - points[i]){
			cnt += (points[i+1] - points[i] - 1) - c + 1;
		}
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
