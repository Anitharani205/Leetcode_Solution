class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int res = abs(nums[i]);
            if(res < abs(ans))
            {
                ans = nums[i];
            }
            else if(res==abs(ans))
            {
                ans = max(ans,nums[i]);
            }
        }
        return ans;
        
    }
};