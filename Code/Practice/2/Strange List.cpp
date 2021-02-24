#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,x,elem;
	cin >> n >> x;
	ll sum = 0;
	vector<pair<int,int>> p;
	for(int i = 0 ; i < n ; i++){
		cin >> elem; 
		sum += elem;
		p.push_back({elem,1});
	}	
	
	for(int i = 0 ; i < (int)p.size() ; i++){
		if(p[i].first % x == 0){
			p.push_back({p[i].first/x , p[i].second*x});
			sum += p[i].first*p[i].second;
		} else{
			cout << sum << '\n';
			return;
		}
	
	}
}

int main(){

	int t; 
	cin >> t;
	while(t--){
		solve();	
	}
}
