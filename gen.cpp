// A script for generating small random tests for stress testing 

#include<bits/stdc++.h>
using namespace std;

int main(){
	time_t current_time = time(NULL);
	srand(current_time);	
	int n = rand()%100 + 1;		// change values --> constraints (take small tests)
	cout << n << '\n';
	for(int i = 0 ; i < n ; i++){	// generate array of n-integers --> (check constraints)
		cout << rand()%100 + 1 << ' '; 
	}
	cout << '\n';
}
