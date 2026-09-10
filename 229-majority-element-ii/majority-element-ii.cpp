class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = 0 ; i<nums.size() ;){
            int idx = i ;
            int count=0; 
            while(idx<nums.size()){
                if(nums[i] == nums[idx]){
                    idx++;
                    count++;
                }
                else{
                    break;
                }
            }
            if(count>nums.size()/3){
                ans.push_back(nums[i]);
            }
            i+=count;
        }
        return ans;
    }
};