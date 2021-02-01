#include<bits/stdc++.h>
using namespace std;


int min_subset_sum_diff(int a[], int n, int sum){


    int dp[n+1][sum+1];    

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;


    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            if(a[i-1] > j) dp[i][j] = dp[i-1][j];
            if(j >= a[i-1]){
                dp[i][j] = dp[i-1][j] || dp[i-1][j - a[i-1]];
            }

        }
    }

    
    int best = INT32_MAX;
    for(int j = 0 ; j <= sum/2 ; j++){
        if(dp[n][j]) best = min(best,sum - 2*j);
    }

    return best;

}



int main(){

    int a[] = {1,2,7};
    int n = sizeof(a)/sizeof(a[0]);    
    int sum =  10;
    cout << min_subset_sum_diff(a, n , sum);

}


