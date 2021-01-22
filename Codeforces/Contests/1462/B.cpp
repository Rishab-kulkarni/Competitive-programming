#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)

const ll MOD = 1000000007;

void solve(string s, int n){
    string s1 = "2020";
    string first = s.substr(0, 4);
    string last = s.substr(n - 4, 4);
    string temp1 = "";
    temp1 += s[0];

    string temp2 = s.substr(n - 3, 3);
    string temp3 = s.substr(0, 3);
    string temp4 = "";
    temp4 += s[n - 1];
        if (s1 == s) {
            cout << "YES" << endl;
            return;
        }

        if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
            cout << "YES" << endl;
            return;
        }

        if (s1 == first || s1 == last) {
            cout << "YES" << endl;
            return;
        }

        if (temp1 == "2" && temp2 == "020") {
            cout << "YES" << endl;
            return;;
        }
        
        if (temp3 == "202" && temp4 == "0") {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}


int main()
{
    // open();
    test(){
        int n;
        string s;
        cin >> n >> s;
        solve(s, n);

    }




    return 0;
}
