class Solution {
public:
    int getValue(char c)
    {
        switch(c)
        {
            case 'I':return 1;
            case 'V' : return 5;
            case 'X':return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            default:return 1000;
        }
    }
    int romanToInt(string s) {

        int total=0;
        for(int i=0;i<s.length();i++)
        {
            int curr=getValue(s[i]);
        if(i+1 < s.length() && curr < getValue(s[i+1]))
        {
            total-=curr;
        }
        else
        {
            total+=curr;
        }
        }

        return total;
        
    }
};