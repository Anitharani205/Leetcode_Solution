class Solution {
public:
    string trimTrailingVowels(string s) {
        int i=s.length()-1;
        while(i >= 0)
        {
            char ch = s[i];
            if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                i--;
            }
            else
            {
                break;
            }
        }
        return s.substr(0,i+1);
    }
};