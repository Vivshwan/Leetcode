class Solution {
public:
    int bisearch(vector<int>& nums,int left , int right , int target){
        if(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                return mid ;
            }
            if(nums[mid] < target){
                return bisearch(nums,mid+1,right,target);
            }
            else{
                return bisearch(nums,left,mid-1, target);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        return bisearch(nums,left,right,target);
    }
};