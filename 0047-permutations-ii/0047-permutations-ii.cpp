class Solution {
public:
    void perms(vector<vector<int>>& result,vector<int>& nums,int index)
    {
        if(index==nums.size())
        {
            result.push_back(nums);
            return;
        }
        unordered_set<int> used;
       for(int i=index;i<nums.size();i++)
       {
           if(used.count(nums[i]))
           continue;
        used.insert(nums[i]);
   
        swap(nums[index],nums[i]);
        perms(result,nums,index+1);
        swap(nums[index],nums[i]);
    }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        perms(result,nums,0);
        return result;
    }
};