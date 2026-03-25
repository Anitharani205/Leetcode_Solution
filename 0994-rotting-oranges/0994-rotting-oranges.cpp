class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();

       queue<pair<int,int>>q;
       int fresh=0;

       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==2)
            {
                q.push({i,j});
            }
            else if(grid[i][j]==1)
            {
                fresh++;
            }
        }
       }
       int minutes=0;
       vector<pair<int,int>> direction={{-1,0},{1,0},{0,1},{0,-1}};

       while(!q.empty() && fresh > 0)
       {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            auto it=q.front();
            q.pop();

            int x=it.first;
            int y=it.second;

            for(auto d : direction)
            {
                int nx = x + d.first;
                int ny = y + d.second;

                if(nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                    fresh--;
                }
            } 
        }
       minutes++;
       }
       if(fresh==0)
       {
        return minutes;
       }
       return -1;
    }
};