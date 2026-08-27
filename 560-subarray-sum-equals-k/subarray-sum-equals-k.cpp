class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> prefixSum;
        prefixSum[0] = 1;

        int cumulativeSum = 0;
        int result =0;

        for(int i =0 ; i<nums.size(); i++){
            cumulativeSum += nums[i];

            int target = cumulativeSum - k ;

            if(prefixSum.count(target)){
                result+= prefixSum[target];
            }
            prefixSum[cumulativeSum]++;
        }
        return result;
    }
};