
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	
	if(k > ((n+1)/2) - 1){
		cout << -1 << '\n';
		return;
	}
	
	vector<int> a;
	for(int i = 1 ; i <= n - 2*k; i++){
		a.push_back(i);	
	}

	for(int i = n - 2*k +1 ; i <= n ; i+=2){
		a.push_back(i+1);
		a.push_back(i);
	}
	
	for(auto val : a) cout << val << ' ';
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
