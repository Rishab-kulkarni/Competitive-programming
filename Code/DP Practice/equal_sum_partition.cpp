#include<bits/stdc++.h>
using namespace std;

unordered_map <string,bool> lookup;

int subset(int a[], int n , int sum){
    if(sum == 0) return true;
    if(n == 0) return false;

    bool include = subset(a, n - 1, sum - a[n-1]);
    bool exclude = subset(a, n - 1, sum);

    return include || exclude;

}



bool bottom_up(int a[], int n , int sum){

    int dp[n+1][sum + 1];

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int j = 0 ; j <= n ; j++) dp[0][j] = 1;


    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            
            if(a[i-1] > j){
                dp[i-1][j] = 0;
            }

            else{
                dp[i-1][j] = dp[i-1][j] || dp[i-1][j - a[i - 1]];
            }


        }
    }

    return dp[n][sum];

}


bool memoized_version(int a[], int n, int sum){

    if(sum == 0) return true;
    if(n == 0) return false;

    string key = to_string(n) + "|" + to_string(sum);
    
    if(lookup.find(key) == lookup.end()){
        bool include = memoized_version(a, n - 1, sum - a[n-1]);
        bool exclude = memoized_version(a, n - 1, sum);

        lookup[key] = include || exclude;

    }

    return lookup[key];

}






int main(){

    int a[]  = {-1, 1, 0 ,1 ,2 ,3 , 4, 5, 6, 7};
    int n = 10;

    int sum = accumulate(a, a+ n , 0);
    if(sum%2!=0){
        cout << false << endl; 
    }


    else{
        cout << subset(a, n , sum/2) << endl;
        cout << bottom_up(a, n , sum/2) << endl;
        cout << memoized_version(a, n , sum/2) << endl;
    }



}