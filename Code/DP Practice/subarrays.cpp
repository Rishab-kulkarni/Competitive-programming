// Brute force approach

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> nums = {4,6,5,9,3,7};
    vector <int> temp;
    vector <int>l = {0,0,2};
    vector <int>r = {2,3,5};

    int n = nums.size();
    int m = l.size();
    vector <bool>ok;
        


    // for(auto v : nums) cout << v << ' ';
    for(int i = 0 ; i < m ; i++){
        temp = nums;
        sort(temp.begin() + l[i] , temp.begin() + r[i] + 1);
        
        
        
        // break;
        int d = temp[l[i] + 1] - temp[l[i]];
        int ans = 1;

        for(int j = l[i]; j < r[i] ; j++){
            int val = temp[j+1] - temp[j];
            if(val == d) ans++;
        }
        
        if(ans == r[i] - l[i] + 1) ok.push_back(true);
        else ok.push_back(false);
        
    }



    for(auto v : ok) cout << v << ' ';
    cout << endl;


    



}