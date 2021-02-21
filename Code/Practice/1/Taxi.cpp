#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// min(no of 1's, no of 3's) + no of 4's + pair of 2s + left over pair of twos + 1's
	// 1,1,3,3,3,2
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	int ans = 0;
	int cnt_1 = count(a.begin(), a.end(), 1);
	int cnt_2 = count(a.begin(), a.end(), 2);
	int cnt_3 = count(a.begin(), a.end(), 3);
	int cnt_4 = count(a.begin(), a.end(), 4);
	
	ans += cnt_4;
	ans += cnt_3;
	if(cnt_1 > cnt_3){
		cnt_1 -= cnt_3;
	}
	
	else{
		cnt_1 = 0;
	}
	
	ans += (cnt_2 - cnt_2%2)/2;
	cnt_2 %= 2;
	
	if(cnt_2){
		cnt_1 -=2;
		ans++;
	}
	
	if(cnt_1 > 0){
		ans += (cnt_1 - cnt_1%4)/4;
		cnt_1 %= 4;
		if(cnt_1) ans++;
	}
	
	cout << ans << '\n';	
	
	
}
