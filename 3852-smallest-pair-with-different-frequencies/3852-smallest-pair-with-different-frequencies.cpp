class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums)
        {
            freq[num]++;
        }
        vector<int> result;
        for(auto it : freq)
        {
            result.push_back(it.first);
        }
        sort(result.begin(),result.end());

        for(int i=0;i<result.size();i++)
        {
            int x = result[i];
            for(int j=i+1;j<result.size();j++)
            {
                int y = result[j];
                if(freq[x]!=freq[y])
                {
                      return {x,y};
                }
            }
        }
        return{-1,-1};
    }
};