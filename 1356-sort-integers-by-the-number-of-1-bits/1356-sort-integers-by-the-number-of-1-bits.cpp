class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
            int bitCountA = countBits(a);
            int bitCountB=countBits(b);

            if(bitCountA == bitCountB)
            return a < b;

            return bitCountA < bitCountB;
        });
        return arr;  
    }
    int countBits(int x)
    {
        int count=0;
        while(x)
        {
            x=x & (x-1);
            count++;
        }
        return count;
    }
};