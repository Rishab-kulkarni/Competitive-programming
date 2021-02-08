#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int mxN = 100000;
vector<bool> vis(100000,false);

void solve(vector<int> w, vector<int> l, int n){
	// Optimal strategy is to kick smaller wt frogs first
	
	int ans = 0;
	
	
	int idx_p = find(w.begin() + 1, w.end(), 1) - w.begin();
	idx_p += 1; 
//	vis[idx_p] = true;
//	cout << idx_p << endl;


	// O(n^2*log(n))
	for(int i = 2 ; i <= n ; i++){
		int idx = find(w.begin() + 1, w.end() , i) - w.begin();
//		cout << i <<  ' ' << "idx_p = " << idx_p << " idx = " << idx << endl;
		
		int temp = l[idx];
		int jump = 0;
		while(idx < idx_p){
			idx += temp;
			jump++;
		}
		
		ans += jump;
		idx_p = idx;
		idx_p++;
	}
	cout << ans << endl;
}


int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		vector<int> w(n+1), l(n+1);
		for(int i = 1 ; i <= n ; i++) cin >> w[i];
		for(int i = 1 ; i <= n ; i++) cin >> l[i];
		
		solve(w,l,n);
	}	
}
