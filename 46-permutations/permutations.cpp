class Solution {
public:
    void permutation(vector<int>& nums , int idx , vector<vector<int>>& result){
        if(idx == nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i = idx ; i< nums.size() ;i++){
            swap(nums[idx], nums[i]);
            permutation(nums,idx+1 , result);

            swap(nums[idx],nums[i]);   //backtrack

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
    

        permutation(nums,0,result);

        return result;
    }
};