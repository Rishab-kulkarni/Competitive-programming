
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int w1,w2,x1,x2,m;
	cin >> w1 >> w2 >> x1 >> x2 >> m;
	
	assert(w2 > w1);
	int diff = w2 - w1;
	cout << (diff >= x1*m && diff <= x2*m ? "1" : "0") << '\n';
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

