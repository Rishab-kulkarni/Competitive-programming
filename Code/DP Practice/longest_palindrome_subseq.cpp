#include<bits/stdc++.h>
using namespace std;

class Solution{

	public:
		Solution(){
			cout << "constructor"<< endl; 
		}
		void meth1(){
			cout << "hello world" << endl;
		}
		void solve(){
			meth1();
			cout << "we are in class A" << endl;
		}
};


int main(){

	Solution ob;
	ob.solve();

}
