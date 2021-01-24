#include <bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    
    // open();
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; ++i) cin >> a[i];

        int cnt = 0;

        int i = 0;
        int j = n-1;

        while((a[i] == 0)) i++;
        while((a[j] == 0)) j--;

        for(int val = i ; val <= j ; val++){
            if(!a[val]) cnt++;
        }

        cout << cnt << endl;

    }
}
