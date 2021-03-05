#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	if(n & 1){
		cout << -1 << '\n'; return;
	}
	
	vector<int>a(n);
	for(int i = 0 ; i < n ; i++) a[i] = i+1;
	for(int i = 0 ; i < n ; i+=2){
		swap(a[i], a[i+1]);
	}
	
	for(int i = 0 ; i < n ; i++) cout << a[i] << ' ';
	cout << '\n'; 
	
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
