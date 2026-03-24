class Solution {
public:
    void solve(int index,string digits,vector<string>& mapping,string current,vector<string>& result)
    {
        if(index==digits.size())
        {
            result.push_back(current);
            return;
        }

        int digit=digits[index]-'0';
        string letters=mapping[digit];
        for(char ch:letters)
        {
            current.push_back(ch);
            solve(index+1,digits,mapping,current,result);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty())
        {
            return result;
        }
       vector<string> mapping={
        " "," ",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
       };
       string current="";
       solve(0,digits,mapping,current,result);
        return result;
    }
};