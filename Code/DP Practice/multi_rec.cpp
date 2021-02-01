#include<bits/stdc++.h>
using namespace std;

int fun(int n){

    if(n == 0) return 1;
        
        
    return fun(n-1) + fun(n-1);
    



}



int main(){


    int val = fun(3);

    cout << val << endl;
    // system("pause");

}