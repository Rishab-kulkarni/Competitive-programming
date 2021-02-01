#include<bits/stdc++.h>
using namespace std;

void min_ins_del(string a, string b, int m, int n){

    int dp[m+1][n+1];
    memset(dp, -1 , sizeof(dp));

    // length of the longest common subsequence

    for(int i = 0 ; i <= m ; i++) dp[i][0] = 0;
    for(int i = 0 ; i <= n ; i++) dp[0][i] = 0;

    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){

            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }

            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }


    cout << "Deletion : " << m - dp[m][n] << endl;
    cout << "Insertion : " << n - dp[m][n] << endl;




}






int main(){

    string a = "abcd";
    string b = "ball";
    int m = a.length();
    int n = b.length();


    // min_ins_del(a, b, m, n);

    // char ch = 'Z';
    // cout << (int)ch << endl;

    // for(auto ch : a){
    //     cout << (int)ch << endl;
    // }



}