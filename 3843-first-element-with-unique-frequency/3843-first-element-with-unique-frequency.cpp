class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums)
        {
            freq[num]++;
        }
        unordered_map<int,int> freqCount;
        for(auto &it:freq)
        {
            freqCount[it.second]++;
        }
        for(auto it : nums)
        {
           if(freqCount[freq[it]]==1)
           {
            return it;
           }
        }
        return -1;
        
    }
};