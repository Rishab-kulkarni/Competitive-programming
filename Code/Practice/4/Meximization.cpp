
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	int h[105] = {0};
	for(int i = 0 ; i < n ; i++){
		int elem; cin >> elem;
		h[elem]++;
	}	
	
	for(int i = 0 ; i < 105 ; i++){
		if(h[i] != 0){
			cout << i << ' ';
			h[i]--;
		}	
	}
	
	for(int i = 0 ; i < 105 ; i++){
		if(h[i] != 0){
			while(h[i]--){
				cout << i << ' '; 
			}
		}
	}
	cout << '\n';
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
