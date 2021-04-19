
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int am, bm,cm, tm,a,b,c;
	cin >> am >> bm >> cm >> tm >> a >> b >> c;
	
	cout << (a >= am && b >= bm && c >= cm && (a + b + c >= tm) ? "YES" : "NO") << '\n';
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
    	solve();
	}
}

