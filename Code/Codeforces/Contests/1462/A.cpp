#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)

const ll MOD = 1000000007;


int main(){

    fastio();
    // open();
    
    test(){
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        vector<int> ans;

        int i = 0 , j = n-1;
        int cnt = 0;
        while(i <= j){
            if(cnt%2 == 0){
                ans.push_back(a[i]);
                cnt++;
                i++;
            }

            else{
                ans.push_back(a[j]);
                cnt++;
                j--;
            }

        }

        for(auto val : ans) cout << val << ' ';
        cout << endl;

    }
    
    

    cerr << 1000*clock()/CLOCKS_PER_SEC << endl;
    return 0;
}
