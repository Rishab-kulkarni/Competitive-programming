#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
using namespace std;
 
int solve(int x){
	
	if(x==0) return 1;
	if(x < 0) return 0;
	
	return solve(x-1) + solve(x-2) + solve(x-3) + solve(x-4) + solve(x-5) + solve(x-6);
 
 
}
 
const ll MOD = 1000000007;
 
int main(){
	
	fastio();
	
	clock_t start = clock();
	int n;
	cin >> n;
 
 
	int dp[n+1];	
	memset(dp, 0, sizeof(dp));	
//	cout << solve(n) << endl;
//	cerr << (double)(clock() - start)/(CLOCKS_PER_SEC) << endl;		
	
	
	start = clock();	
	dp[0] = 1;
	for(int i = 1 ; i <= n ; i++){
//		dp[i] = 0;
		for(int j = 1 ; j <= 6 ; j++){
			if(i-j >= 0){
				dp[i] = dp[i] + dp[i-j];
				dp[i] = dp[i]%MOD;	
			}
		}	
	}
	
	cout << dp[n] << endl;
//	cerr << (double)(clock() - start)/(CLOCKS_PER_SEC) << endl;
 
}
