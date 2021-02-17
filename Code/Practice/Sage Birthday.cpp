#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ;i < n ; i++){
		cin >> a[i];
	}
	
	if(n == 1 || n == 2){
		cout << 0 << '\n';
		for(auto val : a) cout << val << ' ';
		 return ;
	}
	
	sort(a.begin(), a.end());
	cout << (n%2 == 0 ? n/2 -1 : n/2) << '\n';
	for(int i = 0 ; i < n ; i+= 2){
		if(i + 1 < n)	swap(a[i], a[i+1]);
	}	
	
	for(auto val : a) cout << val << ' '; 
	cout << '\n';
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}		
}
