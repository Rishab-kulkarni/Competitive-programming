
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int px, py; string s;
	cin >> px >> py >> s;
	
	int cnt_R = count(s.begin(), s.end(), 'R');
	int cnt_L = count(s.begin(), s.end(), 'L');
	int cnt_D = count(s.begin(), s.end(), 'D');
	int cnt_U = count(s.begin(), s.end(), 'U');

	if(px == 0 && py == 0){
		cout << "YES\n"; return;
	}

	if(px <= 0 && py <= 0){
		if(cnt_D >= abs(py) && cnt_L >= abs(px)){
			cout << "YES\n";
		}
		else cout << "NO\n"; 
	}
	
	if(px > 0 && py > 0){
		if(cnt_U >= abs(py) && cnt_R >= abs(px)){
			cout << "YES\n";
		}
		else cout << "NO\n"; 
	}
	
	if(px > 0 && py <= 0){
		if(cnt_D >= abs(py) && cnt_R >= abs(px)){
			cout << "YES\n";
		}
		else cout << "NO\n"; 
	}
	
	if(px <= 0 && py > 0){
		if(cnt_U >= abs(py) && cnt_L >= abs(px)){
			cout << "YES\n";
		}
		else cout << "NO\n"; 
	}
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
