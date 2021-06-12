
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> depths,a;

void dfs(int start, int end, int curr_depth){
	
	if(start > end){
		return;
	}
	// find max-elem pos
	int mx = INT_MIN;
	int mx_pos = -1;
	for(int i = start ; i <= end ; ++i) {
		if(a[i] > mx){
			mx = a[i];
			mx_pos = i;
		}
	}
	
	depths[mx - 1] = curr_depth;
	dfs(start, mx_pos - 1, curr_depth + 1);
	dfs(mx_pos + 1, end, curr_depth + 1);
}


void solve() {
	int n; cin >> n;
	
	a.resize(n);
	depths.resize(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	dfs(0, n-1, 0);
	
	for(auto it : a){
		cout << depths[it - 1] << ' ';
	}
	cout << '\n';
	
		
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
