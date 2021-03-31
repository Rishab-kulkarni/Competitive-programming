
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	
	int cnt_x = count(s.begin(), s.end() , 'x');
	int cnt_y = count(s.begin(), s.end() , 'y');
	
	int val = min(cnt_x,cnt_y);
	cout << string(abs(cnt_x - val), 'x') + string(abs(cnt_y - val), 'y') << '\n';
	
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

