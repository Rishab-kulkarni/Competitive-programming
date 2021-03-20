
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	string ch[4];
	int cnt = 0;
	for(int i = 0 ; i < 4 ; ++i){
		cin >> ch[i];
		cnt += (int)count(ch[i].begin(), ch[i].end(), 'x');
	}

	if(cnt < 2){
		cout << "NO"; return;
	}
	
	auto check = [&] (){
		for(int i = 0 ; i < 4 ; i++){
			for(int j = 0 ; j < 4 ; j++){
				for(int idx1 = -1 ; idx1 <= 1 ; idx1++){
					for(int idx2 = -1 ; idx2 <= 1 ; idx2++){
						if(idx1 == 0 && idx2 == 0) continue;
						// out of bounds ? 
						if(i + 3*idx1 > 4 || i + 3*idx1 < -1 || j + 3*idx2 > 4 || j + 3*idx2 < -1) continue;
						bool ok = true;
						for(int val = 0 ; val < 3 ; val++){
							ok &= (ch[i + val*idx1][j + val*idx2] ==  'x');
						}
						if(ok) return true;
					}
				}
			}
		}
		return false;
	};
	
	
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			if(ch[i][j] == '.'){
				ch[i][j] = 'x';
				if(check()){
					cout << "YES\n"; return;
				}
				ch[i][j] = '.';
			}
		}
	}
	cout << "NO\n";	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
	while(t--){
		solve();
	}
}
