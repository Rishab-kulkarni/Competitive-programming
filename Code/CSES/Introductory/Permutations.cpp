#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int n;
    cin >> n;
    vector <int> a;
 
    if(n ==2 || n ==3) cout << "NO SOLUTION" << endl;
    else{
        for(int i = n ; i >0 ; i--){
            if(i%2!=0) a.push_back(i); 
        }
 
        for(int i = n ; i >0 ; i--){
            if(i%2 == 0) a.push_back(i);
        }
    }
 
    for(auto s : a) cout << s << ' ';
    cout << endl;
}
