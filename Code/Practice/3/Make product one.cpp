	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	// only the number of elements < 0 matters
	// and if element == 0 <-- check whether occurs even or odd number of times
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int cnt_0 = count(a.begin(), a.end(), 0);
	int cnt_neg = count_if(a.begin(), a.end(), [] (int val){ return val < 0;});
	ll coins = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] > 0){
			coins += abs(a[i] - 1);
		}
	}
	
	if(cnt_neg & 1){
		for(int i = 0 ; i < n ; i++){
			if(a[i] < 0) coins += abs(a[i] + 1);
		}
		
		if(cnt_0 != 0){
			coins++;
			cnt_0--;
		}
		else coins += 2;
		
	}
	else{
		for(int i = 0 ; i < n ; i++){
			if(a[i] < 0) coins += abs(a[i] + 1);
		}
	}
	coins += cnt_0*1;
	cout << coins << '\n';	
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
