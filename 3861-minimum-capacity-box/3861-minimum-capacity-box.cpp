class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(capacity[i]>=itemSize)
            {
                  if(ans==-1 || capacity[ans] > capacity[i])
                  ans=i;
            }
        }
        return ans;
    }
};