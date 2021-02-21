#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin >> n >> m;
	
	if(n == 1){
		cout << 0 << '\n';
		return ;
	}
	
	if(n == 2){
		cout << m << '\n';
		return;
	}
	
	cout << 2*m << '\n';
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
