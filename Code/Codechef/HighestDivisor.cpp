#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, ans = 1;
	cin >> n;
	for(int i = 1 ; i <= 10 ; i++){
		if(n%i == 0){
			ans = max(ans,i);
		}
	}
	cout << ans << '\n';
}
