#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,k;
	cin >> n >> k;
	
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	
	while(k--){
		int x;
		cin >> x;
		int l = 0, r = n+1;
		
		bool ok = false;
		while(r > l + 1){
			int m = (l + r)/2;
			if(a[m] <= x){
				l = m;
			}
			
			else if(a[m] > x){
				r = m;
			}
			
		}
		
		cout << l << endl;
		
	}
	
	


}
