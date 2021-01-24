#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n,elem;
    cin >> n;
    map <int,int> m;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> elem;
        m[elem]++;
    }
 
 
    map<int,int>::iterator itr;
    
    int cnt = 1;
    for(itr = m.begin() ; itr!= m.end(); itr++){
        if((*itr).first == cnt) cnt++;
        else break;
    }
 
    cout << cnt << endl;
 
}
