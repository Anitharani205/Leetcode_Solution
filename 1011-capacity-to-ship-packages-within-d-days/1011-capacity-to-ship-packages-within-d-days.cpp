class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++)
        {
            high+=weights[i];
        }
       
        while(low <= high)
        {
            int mid=low + (high-low)/2;
             int daysUsed=1;
             int load=0;
            for(int j=0;j<weights.size();j++)
            {
            if(load+weights[j] > mid)
            {
                daysUsed++;
                load=weights[j];
            }
            else
            {
                load+=weights[j];
            }
            }
           
         if(daysUsed <= days)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
            return low;

    }
};