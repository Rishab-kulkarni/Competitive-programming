	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int sum = 0;
	vector<int> a(4);
	for(int i = 0 ; i < 4 ; i++) cin >> a[i], sum += a[i];
	
	sort(a.begin(), a.end());
	if(sum & 1){
		cout << "NO\n"; return;
	}
	
	int big = a[3];
	if(a[0] + a[1] + a[2] == big){
		cout << "YES\n";
		return;
	}
	int small = a[0];
	
	if(big + small == a[1] + a[2]){
		cout << "YES\n"; return;
	}
	cout << "NO\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
}
