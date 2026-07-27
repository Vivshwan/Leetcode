class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxvalue=-1;
        int maxindex=-1;
        int n = nums.size();
        for(int i = 0 ; i<n; i++){
            if (maxvalue<nums[i]){
                maxvalue=nums[i];
                maxindex=i;
            }
        }

        for(int i =0;i<n;i++){
            if(maxvalue<2*nums[i] && i != maxindex){
                return -1;
            }

        }
        return maxindex;
        
    }
};