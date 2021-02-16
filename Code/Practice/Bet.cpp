#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	
	int sum = a + b + c + d + e;
	if(sum%5 == 0 && sum/5 != 0){
		cout << sum/5 << '\n';
	}
	
	else cout << -1 << '\n';	

}
