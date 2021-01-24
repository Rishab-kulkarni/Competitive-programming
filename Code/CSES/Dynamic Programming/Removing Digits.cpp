#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> dp(n+1, INT32_MAX - 1); 
	
	dp[0] = 0;
	for(int i = 1 ; i <= n ; i++){
		for(char c : to_string(i)){
			dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
		}
	} 
	
	cout << dp[n] << endl;
}
