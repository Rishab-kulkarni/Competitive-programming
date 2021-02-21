#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n; string s;		
		cin >> n >> s;
		if(s[0] == '1' || s[n-1] == '1'){
			cout << 2*n << endl;
			continue;
		}
		


		int left = -1, right = -1;
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '1'){
				left = i;
			}
		}
		
		for(int i = n -1 ; i >= 0 ; i--){
			if(s[i] == '1'){
				right = i;
			}
		}
		
		int ans = n;
		if(right != -1) ans = max(ans, 2*(n - right));
		if(left != -1) ans = max(ans, 2*(left + 1));
		cout << ans << endl;
	}	
}
