class Solution {
public:
vector<int> left;
vector<int> right;
    void leftsum(vector<int>& nums){
        int n = nums.size();
        left = vector<int> (n,0);
        for(int i =1 ; i<n;i++){
            left[i]=left[i-1]+nums[i-1];
        }
    }
    void rightsum(vector<int>& nums){
        int n = nums.size();
        right = vector<int> (n,0);
        for(int i =n-2 ; i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }
    }

    vector<int> leftRightDifference(vector<int>& nums) { 
        leftsum(nums);
        rightsum(nums);
        vector<int> ans;  
        int n = nums.size();     
        for(int i =0 ; i<n ;i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};