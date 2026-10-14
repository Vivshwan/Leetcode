class Solution {
public:
    void allsubset(vector<int>& nums, vector<int>& ans, int idx , vector<vector<int>>& storesubset){
        if(idx == nums.size()){
            storesubset.push_back({ans});
            return ;
        }
        //inclusion 
        ans.push_back(nums[idx]);
        allsubset(nums,ans,idx+1,storesubset);
        //exclusion
        ans.pop_back();
        allsubset(nums,ans,idx+1,storesubset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> storesubset;
        allsubset(nums,ans,0, storesubset);
        return storesubset;
        
    }
};