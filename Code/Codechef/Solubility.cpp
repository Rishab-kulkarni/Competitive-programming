

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){

	int x,a,b;
	cin >> x >> a >> b;
		
	cout << (a + (100 - x)*b)*10 << '\n';	
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}

