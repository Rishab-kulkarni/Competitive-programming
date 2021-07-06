
#include <bits/stdc++.h>
using namespace std;


int createPalindrome(int input, int b, bool isOdd){
	int n = input;
	int palin = input;

	if (isOdd)
		n /= b;

	while (n > 0){
		palin = palin * b + (n % b);
		n /= b;
	}
	return palin;
}


void generatePalindromes(int n){
	int number;

	int i = 1;
	while ((number = createPalindrome(i, 10, 1)) < n) {
			cout << number << " ";
			i++;
	}
}

int main(){
	int n = 200;
	generatePalindromes(n);
	return 0;
}

