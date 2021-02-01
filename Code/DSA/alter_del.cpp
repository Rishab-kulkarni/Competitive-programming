#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin) ; freopen("output.txt", "w", stdout);
using namespace std;
int main(){

    open();

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int c_e = 0 , c_o = 0;
    vector<int> even, odd;
    for(int i = 0 ; i < n ; i++){
        if(a[i]%2 == 0) c_e++ , even.push_back(a[i]);
        else c_o++ , odd.push_back(a[i]);
    }

    // O(nlogn) - sorting
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if(abs(c_e - c_o) == 1 || abs(c_e - c_o) == 0){
        cout << 0 << endl;
        return 0;
    }

    if(c_o == 0){
        even.pop_back();
        cout << accumulate(even.begin(), even.end(), 0);
        return 0;
    }

    if(c_e == 0){
        odd.pop_back();
        cout << accumulate(odd.begin(), odd.end(), 0);
        return 0;
    }

    
        

    // O(n) 
    int i = 0;

    odd[odd.size() - 1] > even[even.size() - 1] ? odd.pop_back() : even.pop_back() , i++;
        
    while(even.size()!=0 && odd.size()!=0){
        if(i%2 != 0) odd.pop_back() , i++;
        else even.pop_back() , i++;
    }

    // O(n)
    cout << accumulate(even.begin() , even.end(), 0) + accumulate(odd.begin(), odd.end(), 0) << endl;





}