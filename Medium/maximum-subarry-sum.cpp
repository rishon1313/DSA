class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMax = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
           globalMax=max(globalMax,sum);
           if(sum<0)
           {
               sum=0;
           }
        }
        return globalMax;
    }
};
