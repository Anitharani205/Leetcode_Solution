class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int n=nums.size();
       int val=0;
       for(int i=0;i<n;i++)
       {
        val=(val*2+nums[i])%5;
        res.push_back(val==0);
       }
     return res;
    }
};