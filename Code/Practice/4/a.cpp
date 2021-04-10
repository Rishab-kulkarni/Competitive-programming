
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// sort the array, if the last number or the second last number can be written as exactly sum of n numbers
	// then that n numbers is the array
	int n; cin >> n;
	vector<int> b(n);
	for(int i = 0 ; i < n+2 ; i++) cin >> b[i];
	
	sort(b.begin(), b.end(), greater<int>());
	int sum = b[0];
	int req = 0;
	for(int i = n-1 ; i >= 0 ; i--){
		req += b[i];
		
	}
	
	
	 
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
