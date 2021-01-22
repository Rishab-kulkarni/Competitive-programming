#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0 ; i < n ; i++){
        int elem;
        cin >> elem;
        s.insert(elem);
    }
 
 
    cout << s.size() << endl;
 
 
}
