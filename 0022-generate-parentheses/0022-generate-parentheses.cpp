class Solution {
public:
    void generate(vector<string>& result,string str,int open,int close,int n)
    {
        if(n==open && n==close)
        {
            result.push_back(str);
            return;
        }
        if(open > close)
        {
            generate(result,str+')',open,close+1,n);
        }
        if(open < n)
        {
            generate(result,str+'(',open+1,close,n);
        }
    
    }
    
    vector<string> generateParenthesis(int n) {
      vector<string> result;
      generate(result,"",0,0,n);
      return result;
    }
};