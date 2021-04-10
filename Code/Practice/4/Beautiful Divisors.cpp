
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	auto check = [] (int n)->bool{
		for(int k = 1 ; k < 32 ; k++){
			if(((ll)pow(2,k-1))*((ll)(pow(2,k) - 1)) == (ll)n){
				return true;
			}
		}	
		return false;
	};
	

	for(int i = n ; i >=1 ; i--){
		if(n%i == 0){
			if(check(i)){
				cout << i << '\n'; return;
			}	
		}
		
	} 
	
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
