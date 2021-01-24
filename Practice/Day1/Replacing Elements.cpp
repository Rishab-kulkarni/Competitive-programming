#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,d;
	cin >> n >> d;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	int max_elem = *max_element(a.begin(), a.end());
	
	if(max_elem <= d){
		cout << "YES" << endl;
		return;
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i!=j && a[i] + a[j] <= d){
				cout << "YES" << endl;
				return ;
			}
		}
	}
	
	cout << "NO" << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){	
		solve();		
	}
}
