class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        unordered_map<int,int> f1,f2,total;

        for(int x:nums1)
        {
            f1[x]++;
            total[x]++;
        }
        for(int x : nums2)
        {
            f2[x]++;
            total[x]++;
        }
        int swap=0;
        for(auto &p:total)
        {
            if(p.second%2!=0)
            {
                return -1;
            } 
        }    
        for(auto &p:f1)
        {
            int x=p.first;
            int diff=f1[x]-f2[x];

            if(diff > 0)
            {
                swap+=diff/2;
            }
        }
        return swap;
    }
};