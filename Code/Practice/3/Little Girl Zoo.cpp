	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	// simple bubble sort smh!
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n-1-i ; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				cout << j + 1<< ' ' << (j + 1) + 1 << '\n';
			}
		}
	}
	
	assert(is_sorted(a.begin(), a.end()));
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
