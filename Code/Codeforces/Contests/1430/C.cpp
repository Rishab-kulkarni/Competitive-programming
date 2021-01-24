#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;
typedef long long ll;


void solve(int n){
    set<int> s;
    for(int i = 1; i <= n ; i++ ){
        s.insert(i);
    }

    // vector<pair<int, int>> ans;

    cout << 2 << endl;
    for(int i = 0 ; i < n -1 ; i++){
        auto it = s.end();
        it--;
        int a = *it;
        s.erase(it);
        it = s.end();
        it--;
        int b = *it;
        s.erase(it);
        s.insert((a+ b + 1)/2);
        cout << a << ' ' << b << endl;
    }

    // cout << 2 << endl;
    // for(int i = 0 ; i < (int)ans.size() ; i++){
    //     cout << ans[i].first << ' ' << ans[i].second << endl;
    // }



}

    
int main(){
    
    // open();
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        solve(n);

    }    
}
