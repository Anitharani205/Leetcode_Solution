class Solution {
public:
    void backtrack(vector<vector<int>>& result,vector<int>& temp,vector<int>& nums,int index)
    {
        result.push_back(temp);
        for(int i=index;i<nums.size();i++)
        {
            if(i > index && nums[i] == nums[i-1])
            continue;

            temp.push_back(nums[i]);
            backtrack(result,temp,nums,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        backtrack(result,temp,nums,0);
        return result;
    }
};