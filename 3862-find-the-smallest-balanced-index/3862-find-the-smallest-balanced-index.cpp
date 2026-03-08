class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
       long long sum=0;
       long long product = 1;
       int left=0;
       int right=n-1;
       while(left < right)
       {
        sum+=nums[left];
        left++;

        while(sum>=product && left < right)
        {
            product*=nums[right];
            right--;
        }
       }
       return (sum==product)?left:-1;
      
    }
};