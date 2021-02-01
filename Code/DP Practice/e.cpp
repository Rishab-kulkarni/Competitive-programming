#include<bits/stdc++.h>
using namespace std;

bool isperfect(int x){
    return (sqrt(x) - floor(sqrt(x)) == 0) ? true : false ;
}


int main(){

    int n;
    cin >> n;

    bool p1;
    int cnt = 0;
    int val = n;    
    
    for(int j = n ; j >= 1 && val>=0; j--){
        if(isperfect(j)){
            val-=j;
            cnt++;
            p1 = cnt%2 != 0? true : false;    
        }
    }
    
    if(!p1) cout << "true" << endl;
    else cout << "false" << endl;




}