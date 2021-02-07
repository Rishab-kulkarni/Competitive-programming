#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

string ans;
string start_t, end_t, given;

void convert(string str, int flag){
	// Get hours
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);

	// If time is in "AM"
	string hrs;
	if (str[6] == 'A'){
		if (hh == 12){
			hrs+= "00";
			for (int i=2; i <= 5; i++) hrs.push_back(str[i]);
		}
		else{
			for (int i=0; i <= 5; i++) hrs.push_back(str[i]);
		}
	}

	
	else{
		if (hh == 12){
			hrs+= "12";
			for (int i=2; i <= 5; i++) hrs.push_back(str[i]);
		}
		else{
			hh = hh + 12;
			hrs += to_string(hh);
			for (int i=2; i <= 5; i++)	hrs.push_back(str[i]);
		}
	}
	
	if(flag){
		end_t = hrs;
	}
	
	else{
		start_t = hrs;
	}
	
	if(flag == 2){
		given = hrs;
	}
}

void solve(){
	
	//given[0] + given[1]  start_t[0] + start[1]
	
	string s1 = string(given.begin(), given.begin() + 2);
	string s2 = string(start_t.begin(), start_t.begin() + 2);
	string s3 = string(end_t.begin(), end_t.begin() + 2);
	
	string s4 = string(given.begin() + 4, end_t.begin() + 6);
	string s5 = string(start_t.begin() + 4, start_t.begin() + 6);
	string s6 = string(start_t.begin() + 4, start_t.begin() + 6);
	
	if(s1 >= s2 && s1 <= s3){
		if(s2 == s3){
			if(s4 >= s5 && s4 <= s6) ans.push_back('1');
			else ans.push_back('0');
		}
		
		else{
			ans.push_back('1');
		} 
	}
	
	else ans.push_back('0');
}


int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
	
		start_t.clear(); end_t.clear(); given.clear(); ans.clear();
	
		string P; 
		cin.ignore();
		getline(cin, P);
		convert(P, 2);
		
//		cout << given << endl;		
				
		int n; cin >> n;
		cin.ignore();
		// n <= 500
		for(int i = 0 ; i < n ; i++){
			string s, L, R;
			
			getline(cin, s);	
			for(int i = 0 ; i <= 7 ; i++) L.push_back(s[i]);
			for(int i = 9 ; i<= 16 ; i++) R.push_back(s[i]); 		
			convert(L, 0);
			convert(R, 1);
			cout << start_t << ' ' << end_t << endl; 
			solve(); 
		}
//		cout << ans << endl;
	}	
}
