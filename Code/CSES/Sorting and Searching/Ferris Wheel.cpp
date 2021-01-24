#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,x;
	cin >> n >> x;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	int cnt = 0;
	
	int i = 0, j = n-1;
	while(i <= j){
		if(a[i] + a[j] <= x){
			i++;
			j--;
			cnt++;
		}
		else{
			j--;
			cnt++;
		}
	}

	
	cout << cnt << endl;
	
	
}
