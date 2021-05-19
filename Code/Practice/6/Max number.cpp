
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; 
	cin >> n;
	
	assert(n >= 2);	
	if(n%2 == 0){
		cout << string(n/2, '1') << '\n';
	}
	else {
		n -= 3;
		cout << '7' << string(n/2, '1') << '\n';
	}
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
