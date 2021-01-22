#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,k;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	cin >> k;
	while(k--){
		int x, y;
		cin >> x >> y;
		int l = -1, r = n;
		
		auto it1 = lower_bound(a.begin(), a.end(), x);
		auto it2 = upper_bound(a.begin(), a.end(), y);
		
		cout << it2 - it1 << endl;
		
		
//		cout << r+1 << endl;
		
	}
	
	


}
