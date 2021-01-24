#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m,k;
	cin >> n >> m >> k;
	
	vector<ll> a(n), b(m);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < m ; i++) cin >> b[i];
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int i = 0, j = 0;
	int cnt = 0;
	while(i < n && j < m){
		if(abs(a[i] - b[j])<= k){
			i++;
			j++;
			cnt++;
		}
		
		else if(a[i] - k > b[j]){
			j++;
		}
		else if(a[i] + k < b[j]){
			i++;
		}
		
		else{
			i++;
			j++;
		}
	}
	
	cout << cnt << endl;	
}
