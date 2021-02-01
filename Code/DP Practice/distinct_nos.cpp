#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    map <int,int> m;
    for(int i = 0 ; i < n ; i++){
        int elem;
        cin >> elem;
        m[elem]++;
    }


    cout << m.size() << endl;


}