class Solution {
public:
    void allsubset(vector<int>& nums, vector<int> ans, int idx , vector<vector<int>>& storesubset){
        if(idx == nums.size()){
            storesubset.push_back(ans);
            return;
        }
        //inclusion 
        ans.push_back(nums[idx]);
        allsubset(nums, ans, idx+1 , storesubset);

        ans.pop_back();
        //Check duplicate value
        int i=idx+1;
        while(i<nums.size() && nums[i] == nums[i-1]){
            i++;
        }
        allsubset(nums,ans,i,storesubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> ans;
        vector<vector<int>> storesubset;
        allsubset(nums, ans, 0, storesubset);

        return storesubset;
    }
};