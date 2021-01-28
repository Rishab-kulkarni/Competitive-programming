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
		int ans = 0, cnt = 0;
		
		
		int h[105] = {0};
		for(int i = 0 ; i < n ; i++){
			h[a[i]]++;
		} 
		
		for(int i = 0 ; i < 105 ; i++){
			ans = max(ans, h[i]);
		}
		
		cout << ans << endl;
	}	
}
