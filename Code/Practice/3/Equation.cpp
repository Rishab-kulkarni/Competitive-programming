	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll a,b,c;
	cin >> a >> b >> c;
	
	cout << fixed << setprecision(10) ;
	
	if(a == 0 && b == 0){
		if(c == 0) cout << -1 << '\n';
		else cout << 0 << '\n';
		return;
	}
	
	
	if(a == 0){
		cout << 1 << '\n';
		cout << (double)-c/(double)b << '\n';
		return;
	}

	if(b*b - 4*a*c < 0){
		cout << 0 << '\n'; return;
	}
	
	double val = sqrt(b*b - 4*a*c);

	if(val == 0){
		cout << 1 << '\n';
		cout << (double)-b/(double)(2*a) << '\n';
		return;
	}
	
	if(val > 0){
		cout << 2 << '\n';
		double root1 = ((double)-b - val)/(double)(2*a);
		double root2 = ((double)-b + val)/(double)(2*a);
		if(root1 > root2) swap(root1, root2);
		cout << root1 << '\n' << root2 << '\n';
		
	}
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
