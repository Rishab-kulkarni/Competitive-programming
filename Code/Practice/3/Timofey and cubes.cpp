	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	
	int i = 1, j = n;
	while(i < j){
		swap(a[i], a[j]);
		i+=2;
		j-=2;
	}
	
	for(int i = 1 ; i<= n ; i++) cout << a[i] << ' ';  
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
