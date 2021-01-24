#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)

const ll MOD = 1000000007;

void solve(int n){
    
    int val = n;
    int num = 0;
    string ans = "";
    vector<int> a(10);
    for(int i = 0 ; i < 10 ; i++) a[i] = i;

    for(int i = 9 ; i >= 0 ; i--){
        if(n >= a[i]){
            num+= a[i];
            n-=a[i];
            ans+= to_string(a[i]);
        }

        if(num == val) {
            break;
        }

        if(i == 0 && num!=val){
            cout << -1 << endl;
            return;
        }
    }

    reverse(ans.begin(), ans.end());
    // if(ans.empty()){ cout << -1 << endl;  return ;}
    cout << ans << endl;
}




int main(){

    fastio();
    // open();
    
    test(){
        int n;
        cin >> n;
        solve(n);
	}
   cerr << 1000*clock()/CLOCKS_PER_SEC << endl;
    return 0;


}
