#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
using namespace std;
 
 
const ll MOD = 1000000007;
vector<int> a;
 
int main(){
	
	fastio();
	
	clock_t start = clock();
	
	int n, sum;
	cin >> n >> sum;
	a.resize(n);
	
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int dp[sum+1];
	
//	for(int i = 0 ; i <= sum ; i++) dp[i] = INT32_MAX - 1;	
	
	dp[0] = 0;
	
	for(int i = 1 ; i <= sum ; i++){
		dp[i] = INT32_MAX -1 ;
		for(int j = 0 ; j < n ; j++){
			if(i - a[j] >= 0){
				dp[i] = min(dp[i], 1 + dp[i - a[j]]);
				
			}
		}
	}
	
	cout << (dp[sum] == INT32_MAX -1 ? -1 : dp[sum]) << endl;
	
}
