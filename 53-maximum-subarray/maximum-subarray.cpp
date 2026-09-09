class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int arrsum=0;
        int maxsum=INT_MIN;
        //Kadanes Algorithm
        for(int i = 0 ; i < n ;i++){
            arrsum+=nums[i];
            maxsum= max(maxsum,arrsum);
            if (arrsum<0){
                arrsum=0;
            }
        }
        return maxsum;
    }
};