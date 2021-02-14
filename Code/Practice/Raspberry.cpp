#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,c;
	cin >> n >> c;
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int ans = -100000000;
	for(int i = 0 ; i < n-1 ; i++){
		ans = max(ans, a[i] - a[i+1] -c);
	}	
	
	cout << (ans < 0 ? 0 : ans) << '\n';	
}
