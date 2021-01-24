#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m;
	cin >> n >> m;
	vector<int> a(m);
	
	for(int i = 0 ; i < m ; ++i) cin >> a[i];
	
	ll prev = a[0], time = a[0] - 1;
	for(int i = 1 ; i < m ; i++){
		if(a[i] >= prev){
			time += (a[i] - prev);
		}
		else{
			time += (n - prev + a[i]);
		}
		prev = a[i];
	}
	
	cout << time << '\n';
}
