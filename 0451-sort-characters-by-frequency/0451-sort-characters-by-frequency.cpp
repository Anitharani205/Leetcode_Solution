class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c :s)
        {
            freq[c]++;
        }
        int n=s.length();
        vector<string> buckets(n + 1);

        for(auto &p : freq)
        {
            char c =p.first;
            int f =p.second;
            buckets[f] += string(f,c);
        }
        string ans="";
        for(int i=n;i>=1;i--)
        {
            ans+=buckets[i];
        }
        return ans;
    }
};