// BUGLIFE spoj problem

#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[2001];
vector<int> side(2001, -1);
queue<int> q;
bool isSuspicious = true;

void bfs(int x){

    if(side[x] == -1){
        side[x] = 1;
        q.push(x);
        while(!q.empty()){
            int s = q.front();
            q.pop();
            for(auto v : adj[s]){
                if(side[v] == -1){
                    side[v] = side[s] ^ 1;
                    q.push(v);
                }

                else{
                    isSuspicious &= (side[v]!=side[s]);
                }

            }
        }
    }
}



int main(){

    open();

    int t, j = 1;
    cin >> t;
    while(t--){
        int n, e, u, v;
        cin >> n >> e;
        for(int i = 1 ; i <= e ; i++){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 1 ; i <= n ; i++){
            bfs(i);
        }

        cout << "Scenario #" << j << endl; 
        !isSuspicious ? (cout << "Suspicious bugs found!") : (cout << "No suspicious bugs found!");
        cout << endl;
        j++;
    }


}