#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		
	
		
		r -= (l-1);
		l = 1;	
		cout << 2*(r - l) + 1 << '\n';		
	
	}
	
}
