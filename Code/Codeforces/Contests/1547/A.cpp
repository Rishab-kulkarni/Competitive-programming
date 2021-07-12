#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() {
	
	int xa,ya,xb,yb,xf,yf;
	
	cin >> xa >> ya >> xb >> yb >> xf >> yf;
	
//	int dist = ;
	
	if(abs(xb - xa) == 0 && abs(xf - xa) == 0) {
		if((yf >= ya && yf <= yb) || (yf <= ya && yf >= yb)) cout << abs(xa - xb) + abs(ya - yb) + 2 << '\n';
		else cout << abs(xa - xb) + abs(ya - yb) << '\n';
		return; 
	}
	
	if(abs(yb - ya) == 0 && abs(yf - ya) == 0) {
		 if((xf >= xa && xf <= xb) || (xf <= xa && xf >= xb)) cout << abs(xa - xb) + abs(ya - yb) + 2 << '\n';
		 else cout << abs(xa - xb) + abs(ya - yb) << '\n';
		return; 
	}
	
	cout << abs(xa - xb) + abs(ya - yb) << '\n';
	
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T = 1;
	cin >> T;
	while(T--) {
		solve();
	}
}
