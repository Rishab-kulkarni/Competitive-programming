#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1e5;
vector<int> odd(mxN);
vector<int> ans(mxN);
ll n;

void precompute(){
	for(int i = 1 ; i <= mxN ; i+=2){
		odd.push_back(i*i);
	}
	
	int cnt = 0;
	for(int i = 1 ; i <= mxN ; i++){
		if((odd[i]-1)/2 < n){
			cnt++;
		}
		
		ans[i] = cnt;
	}
	
	
}


int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	precompute();	
	
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		long double x = sqrt(n);
		cout << ans[x] << '\n';
	}	
}
