#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Subarray sum equal to target (naive approach O(n^2))
// The idea is to maintain 2 pointers, i and j and maintain a current sum variable
// iterating with j, and adding elements to current sum till the sum < target sum
// If at any time 
// 		- the current sum = target return true
//		- the current sum > target then increment the i pointer, and subtract a[i] from sum 


void solve(){
	int n, target;
	cin >> n >> target;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int i = 0, j = 0, sum = 0;
	while(i <= n && j <= n){
		if(sum == target){
			cout << "YES\n"; return;		
		}
		else if(sum < target){
			sum += a[j];
			j++;
		}		
		else if(sum > target){
			sum -= a[i];
			i++;
		}
	}
	cout << "NO\n";
}

int main(){

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
