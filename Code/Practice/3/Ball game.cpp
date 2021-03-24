	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	int val = 2;
	int cnt = 2;
	for(int i = 0 ; i <n-1 ; i++){
		cout << (val == 0 ? n : val) << ' '; 
		val	= (val + cnt)%n;
		cnt++;
	}
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
