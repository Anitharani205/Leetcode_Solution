class Solution {
public:
   void backtrack(int index,vector<int>& candidates,int target,vector<int>& temp,vector<vector<int>>& result)
   {
    if(target==0)
    {
        result.push_back(temp);
        return;
    }
    for(int i=index;i < candidates.size();i++)
    {
      if(i > index && candidates[i]==candidates[i-1])
      {
        continue;
      }
      if(candidates[i] > target)
      {
        break;
      }
    temp.push_back(candidates[i]);
    backtrack(i+1,candidates,target-candidates[i],temp,result);
    temp.pop_back();
    }
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        backtrack(0,candidates,target,temp,result);
        return result;
    }
};