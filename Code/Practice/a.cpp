#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		
		dbg(a,b);
		break;
		
//		if(a == b){
//			cout << 2 << endl;
//			continue;
//		}
//		
//		else if(b > a){
//			cout << 1 << endl;
//			continue;
//		}
		
		bool ok = true;
		int cnt = 0;
		for(int i = 0 ; ; i++){
			
			(b == 1) ? (b++) : (a /= b) ;
			cnt++;
			
			if(a == b || a < b || a == 0){
				cnt++;
				break;
			}
		}
		cout << cnt + 1 << endl;
	}
}
