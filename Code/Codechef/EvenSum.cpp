#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		
		ll sum = accumulate(a.begin(), a.end(), 0LL);
		
		cout << (sum%2 == 0 ? 1 : 2) << endl;
		
	}
}
