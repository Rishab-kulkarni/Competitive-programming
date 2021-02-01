#include<bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
typedef long long ll;


void solve(){

    
    string a = "0101011";
    string b = "0111111";

    int m = 500;
    bitset <7> b1(a);
    bitset <7> b2(b);

    // cout << b1 | b2 << endl;
}


ll taum(ll b, ll w, ll bc, ll wc, ll z) {
    
    ll ans;
    // if(wc == bc) return wc*w + bc*b;
    // if(z >= wc && z>=bc) return wc*w + bc*b;
    
    ll val;
    if(wc > bc){
        val = bc;
    }
    else{
        val = wc;
    }
    
    ans = (val == wc) ? (min(wc,bc)*(w + b) + z*b) : (min(wc,bc)*(w + b) + z*w) ; 
    ll ans2 = wc*w + bc*b;
    
    return min(ans,ans2);

    // return b*min(bc, wc + z) + w*min(wc, bc + z);

}



int num_digits(int n){
    int cnt = 0;
    while(n!=0){
        n/=10;
        cnt++;
    }

    return cnt;
}


void kaprekar(){
    
    int p,q;
    cin >> p >> q;

    bool ok = false;
    for(int i = p ; i <=q ; i++){


        int d = num_digits(i);
        int val = i*i;
        if(val%10 == 0) continue;

        string num = to_string(val);
        int d2 = num_digits(val);
        
        if(d2 == 1 && i == 1) {
            cout << 1 << ' ';
            ok = true;
            continue;
        }

        if(d2 == 1 && (i == 2 || i == 3)) continue; 

        if(d2 == 2*d){
            string num1 = num.substr(0,d);
            string num2 = num.substr(d,d);
            int val1 = stoi(num1);
            int val2 = stoi(num2);
            if(val1 + val2 == i) {cout << i << ' '; ok = true;}
            
        }
        
        if(d2 == 2*d -1){
            string num1 = num.substr(0,d-1);
            string num2 = num.substr(d-1, d);
            int val1 = stoi(num1);
            int val2 = stoi(num2);
            if(val1 + val2 == i) {cout << i << ' '; ok = true;}
        }

        if(d2 == 2*d -1){
            string num1 = num.substr(0,d);
            string num2 = num.substr(d, d-1);
            int val1 = stoi(num1);
            int val2 = stoi(num2);
            if(val1 + val2 == i) {cout << i << ' '; ok = true;}
        }
    }
    
    if(!ok) cout << "INVALID RANGE";
    
}


void beautiful_triplet(){

    int n,d;
    cin >> n >> d;
    
    vector <int>a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int trip = 0;
    for(int i = 0 ; i < n ; i++){
        int cnt = 0;
        int k = i;
        int j = i + 1;
        while(k < n && j < n){
            if(a[j] - a[k] == d){
                cnt++;
                k = j;
            }

            else j++;
            if(cnt == 2) break;
        }

        if(cnt == 2) trip++;

    }

    cout << trip ;

}


void beautiful_triplet_optimized(){
    
    int n,d;
    cin >> n >> d;
    vector <int>a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int h[20001 + 2*20] = {0};
    // memset(h, 0 , sizeof(h));

    for(int i = 0 ; i < n ; i++) h[a[i]]++;

    int trip = 0;
    for(int i = 0 ; i < n ; i++){
        if(h[a[i]] && h[a[i] + d] && h[a[i] + d + d]) trip++;
    }

    cout << trip << endl;

}


void min_distances(){

    int n;
    cin >> n;
    vector <int>a(n);

    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int d = INT32_MAX;
    for(int i = 0 ; i < n ; i++){
        int elem = a[i];
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                if(a[j] == elem){
                    d = min(d, abs(j - i));
                }

            }
        }
    }


    (d == INT32_MAX) ? (cout << -1) : (cout << d) ; 
}


void games(){

    int p,d,m,s;

    cin >> p >> d >> m >> s;

    int cnt = 0;
    while(s >= 0){
        s-=p;
        if(p - d <= m) p = m;
        else p-=d;
        cnt++;
    }

    cout << cnt-1 << endl;
}


class A{
    public : int x,y, pub;
    private : int a,b, priv;
};

struct B{
    int y;
    B(){
        
        cout << y << endl;
        cout << "B constructor" << endl;
    }
    void meth1(int y){
        cout << "Meth 1 = " <<  y << endl;
        cout << "Value = ";
        cout << y << endl;
    }
    void meth2(){
        cout << "This is meth2" << endl;
    }
};




void bigger_is_greater(){

    string s,val;
    cin >> s;
    val = s;
    int n = s.length();

    int i = n-2, j = n-1;
    while(i >= 0 && j >= 0){
        if(s[i] < s[j]){
            swap(s[i], s[j]);
            // break;
            
        }

        else{
            i--;
        }
    }

    // cout << s << endl;

}


void next_lex_permut(){
    string s;
    cin >> s;
    int n = s.length();
    int largest = 0;
    int pivot = 0;
    for(int i = 1 ; i < n ; i++){
        if(s[i-1] < s[i]){
            largest = i;
            pivot = i -1;
        }
    }

    for(int i = n-1; i >= largest ; i--){
        if(s[i] > s[pivot]){
            swap(s[pivot], s[i]);
            break;
        }
    }

    reverse(s.begin() + largest , s.end());
    
    // (s == val) ? cout << "no change" : cout << s;
    // cout << endl;
     
    if(pivot == 0 && largest == 0) cout << "no answer" << endl;
    else cout << s << endl;
}





void permute(){

    string s;
    cin >> s;
    string val = s;
    sort(s.begin(), s.end());
    bool ok = true;
    int cnt = 0;

    while(next_permutation(s.begin(), s.end()) && ok){

        if(val == s){
            ok = false;
            next_permutation(s.begin(), s.end());
            // cout << s << endl;
            break;
        }

        cnt++;

    }

    

    (cnt == 0)? cout << "no answer" : cout << s ;

}









void solve_2(){

    // string a = "10101";
    // string b = "11111";

    // vector<ll>ans;
    // int t;
    // cin >> t;
    // while(t--){
        
    //     ll b,w,bc,wc,z;
    //     cin >> b >> w;
    //     cin >> bc >> wc >> z;

    //     ans.push_back(taum(b,w,bc,wc,z));
    // }

    // cout << endl;
    // for(auto u : ans) cout << u << endl;

    // kaprekar();
    // beautiful_triplet();
    // beautiful_triplet_optimized();
    // min_distances();
    // games();

    // A ob;
    // ob.x = 10;
    // ob.y = 20;
    // ob.pub = 30;


    // cout << ob.x << endl;

    // struct B ob2;
    // ob2.y = 15;
    // ob2.meth1(100);
    // ob2.meth2();
    // bigger_is_greater();
    // permute();
    
    
    next_lex_permut();


}

int main(){

    // string a = "fdhlvosfpafhalll";
    // set <char> s;

    // for(auto ch : a) s.insert(ch);

    // fastio();
    // cout << char('a' - 32) << endl;

    // map<char,int>::iterator it;
    // it = m1.begin();

    // for(it = m1.begin() ; it!=m1.end() ; it++){
    //     cout << (*it).first << ' '<< (*it).second << endl;
    //     if(m1.find((*it).first)!= m1.end()) cout << "h" << endl;
    // }

    
    // int n = a.length();
    // cout << n << endl;

    // string s1 = a.substr(0,n/2);
    // string s2 = a.substr(n/2 , n/2);
    // cout << s1 << ' ' << s1.length() << endl;
    // cout << s2 << ' ' << s2.length() << endl;


    string b = "abcabc";
    map <string,int> m;
    for(int i = 0 ; i < (int)b.length() ; i++){
        string s2;
        for(int j = i ; j < (int)b.length() ; j++){
            s2+= b[j];
            m[s2]++;
            // cout << s2 << endl;
        }
        
    }


    // map <string,int>::iterator it;
    
    // for(it = m.begin() ; it!=m.end() ; it++){
    //     cout << (*it).first << ' ' << (*it).second << endl;
    // }


    // A ob;
    // ob.solve2();

    int flag = 0;
    string a = "abcdef";
    int n = a.length();
    for(int i = 0  ; i < n/2 ; i++){
        if(a[i]!= a[n - 1 - i]){
            flag = 1;
            break;
        }
    }

    // if(flag == 0) cout << "Palindrome" << endl;
    // else cout << "Not a palindrome" << endl;

    // for(int i = 0 ; i < n ; i++){
    //     string s2;
    //     s2 = a.substr(0,i) + a.substr(i+1, n-1);
    //     cout << s2 << endl;
        
    // }

    // cout << 'c' - 'a' << endl;

    // solve();

    solve_2();

}