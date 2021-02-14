#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int h1, m1, h2, m2; char ch1, ch2;
	cin >> h1 >> ch1 >> m1;
	cin >> h2 >> ch2 >> m2;
	
//	int hh = (h1 + h2)/2;
//	int	mm = (m1 + m2)/2;

	int val = (h1*60 + m1 + h2*60 + m2)/2;
	int hh = val/60;
	int mm = val%60;
					
	if(hh >= 0 && hh <= 9){
		cout << 0 << hh << ':';
	}
	
	else cout << hh << ':';
	
	if(mm >= 0 && mm <= 9){
		cout << 0 << mm;
	}
	
	else cout << mm ;
	
	cout << endl;
}
