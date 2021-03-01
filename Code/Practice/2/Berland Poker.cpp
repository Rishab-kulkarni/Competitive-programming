#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m,k; 
	cin >> n >> m >> k;
	double val = n/k;
	if(val > m){
		cout << m << '\n';
	}

	else{
		double val2 = ceil((m - val)/ (k-1));
		cout << val - val2 << '\n';
	}	
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
