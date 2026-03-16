class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        set<int> sums;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                sums.insert(grid[i][j]);

                for(int k=1; ; k++)
                {
                    int r1=i;
                    int c1=j;

                    int r2=i+k;
                    int c2=j+k;

                    int r3=i+2*k;
                    int c3=j;

                    int r4= i+k;
                    int c4=j-k;
                if(r3 >= m || c2>=n || c4 < 0) break;
                    int sum=0;
                    for(int d=0;d<k;d++)
                    {
                       sum+=grid[i+d][j+d];
                    }
                    for(int d=0;d<k;d++)
                    {
                       sum+=grid[i+k+d][j+k-d];
                    }
                    for(int d=0;d<k;d++)
                    {
                       sum+=grid[i+2*k-d][j-d];
                    }
                    for(int d=0;d<k;d++)
                    {
                      sum+=grid[i+k-d][j-k+d];
                    }

                    sums.insert(sum);
                }
            }
        }
        vector<int> ans(sums.begin(),sums.end());
        sort(ans.begin(),ans.end(),greater<int>());

        if(ans.size() > 3)
        ans.resize(3);

        return ans;
    }
};