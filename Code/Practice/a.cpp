#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	// 1e9 	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n-1 ; j++){
			for(int k = j + 1 ; k < n ; k++){
				if(a[i] < a[j] && a[j] > a[k]){
					cout << "YES\n";
					cout << i+1 << ' ' << j+1 << ' ' << k+1 << '\n';
					return;
				}
			}
		}
	}
	
	cout << "NO\n";
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
