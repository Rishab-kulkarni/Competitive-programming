#include<bits/stdc++.h>
using namespace std;
    int dfs(vector<vector<char> >& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j] == '0')
            return 0;
        grid[i][j]='0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        return 1;
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
            return 0;
        int islands=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == '1')
                {
                    islands+=dfs(grid,i,j);
                }
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        return islands;
    }
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char> >grid;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int count = numIslands(grid);
    cout<<count<<endl;
}
