#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a%b);
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	

	int t;
	cin >> t;
	while(t--){
		string s,p;
		cin >> s >> p;	
		int m = s.length(), n = p.length();
		int gcd1 = gcd(m,n);
		int lcm = (m*n)/gcd1;
		
		string val1 = "", val2 = "";
		while((int)val1.length() < lcm || (int)val2.length() < lcm){
			if((int)val1.size() < lcm) val1 += s;
			if((int)val2.size() < lcm) val2 += p;
		}
		cout << (val1 == val2 ? val1 : "-1") << '\n';								
	}	
}
