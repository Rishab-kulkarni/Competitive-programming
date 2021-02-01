#include<bits/stdc++.h>
using namespace std;


unordered_map <string,bool> lookup;


bool isSubset(int a[], int n, int sum){
    
    if(sum == 0) return true;
    if(n == 0) return false;

    // if(a[n-1] > sum){
    //     return isSubset(a, n -1 , sum);
    // }


    return isSubset(a, n - 1, sum) || isSubset(a, n -1 , sum - a[n-1]);
}



bool memoized_is_subset(int a[], int n , int sum){

    if(sum == 0) return true;
    if(n == 0) return false;

    string key = to_string(sum) + "|" + to_string(n);
    if(lookup.find(key) == lookup.end()){

        bool include = memoized_is_subset(a, n - 1, sum - a[n-1]);
        bool exclude = memoized_is_subset(a, n - 1, sum);

        lookup[key] = include || exclude;

    }


    return lookup[key];
}


bool bottom_up(int a[], int n , int sum){

    int dp[n+1][sum+1];
    memset(dp, - 1, sizeof(dp));

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int j = 0 ; j <= n ; j++) dp[j][0] = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            
            if(a[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }

            if(a[i-1] <= j ){
                dp[i][j] = dp[i-1][j] || dp[i-1][j - a[i - 1]];
            }


        }
    }

    return dp[n][sum];
}






int main(){
    int a[] = {1,4,9};
    int n = 3;
    int sum = 2;

    cout << isSubset(a, n, sum) << endl;
    cout << memoized_is_subset(a, n , sum) << endl;
    cout << bottom_up(a,n, sum) << endl;   
}