#include<bits/stdc++.h>
using namespace std;

int count_subsets(int a[], int n, int sum){

    int dp[n+1][sum + 1];

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;
    
    // int count = 0;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            if(a[i-1] <= j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
                
            }

            else dp[i][j] = dp[i-1][j];


        }
    }

    return dp[n][sum];

}


int recursion_method(int a[], int n, int sum, int count){

    if(n == 0){
        if(sum == 0) count++;
        return count;
    }


    count = recursion_method(a, n -1 , sum - a[n-1], count);
    count = recursion_method(a, n - 1, sum, count);

    return count;
    
}







int main(){
    

    int a[] = { 1, 2, 3}; 
    int sum = 0; 
    int n = sizeof(a)/sizeof(a[0]);

    cout << count_subsets(a,n, sum) << endl;
    cout << recursion_method(a, n, sum, 0) << endl;



}