#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 100;
	cout << 100 << '\n';
	for(int i = 0 ; i < n ; i++){
		cout << rand()%100 + 1 << ' ' << rand()%100 + 1 << ' ' << rand()%10000 + 1 << '\n';
	}

}
