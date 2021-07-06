// A script for generating small random tests for stress testing 

#include<bits/stdc++.h>
using namespace std;

int main() {
	time_t current_time = time(NULL);
	srand(current_time);
	
	const int N = 100000;
	const int tc = 10;
	
	int test = rand()%tc + 1;
	
	cout << test << '\n';
	for(int i = 0 ; i < test ; ++i) {
		int L = 1 + rand() % N;
		int R = 1 + rand() % (N - 1);
		if(R >= L) R++;
		if(R < L) swap(L, R);
		cout << L << ' ' << R << '\n';
	}
}
