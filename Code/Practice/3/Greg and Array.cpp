	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<ll> a(n+2);
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	
	vector<array<int,3>> operations(m+2);
	for(int i = 1 ; i <= m ; i++){
		int l,r,d;
		cin >> l >> r >> d;
		operations[i] = array<int,3>({l,r,d});
	}
	
	
	// naive approach <-- brute force	
	
	vector<ll> opArray(m + 2, 0);
	for(int i = 1 ; i <= k ; i++){
		int x,y; cin >> x >> y;
		y++;
		opArray[x]++;
		opArray[y]--;	
	}
	
	
	// why this?
	for(int i = 1 ; i <= m ; i++) opArray[i] += opArray[i-1]; 
	
	
	vector<ll> diff(n+2, 0);
	for(int i = 1 ; i <= m ; i++){
		if(opArray[i]){
			int l = operations[i][0],r = operations[i][1];
			r++;
			diff[l] += opArray[i]*operations[i][2];
			diff[r] -= opArray[i]*operations[i][2];
		}
	}
	
	
	for(int i = 1 ; i <= n ; i++){
		diff[i] += diff[i-1];
		a[i] += diff[i];
	}
	
	for(int i = 1 ; i <= n ; i++) cout << a[i] << ' '; 
	
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
