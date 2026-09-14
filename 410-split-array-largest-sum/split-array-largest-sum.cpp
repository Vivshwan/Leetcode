class Solution {
public:
    bool isValid(vector<int>& nums,int k , int mid){
        int student =1;
        int pages =0;
        for(int i =0;i<nums.size() ; i++){
            if(nums[i]>mid){
                return false;
            }
            if(nums[i] + pages <=mid){
                pages+=nums[i];
            }
            else{
                student++;
                pages = nums[i];
            }

        }
        return student>k ? false : true;
    }



    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for(int i =0; i<nums.size() ; i++){
            sum+=nums[i];
        }
        int ans=-1;
        int left =0;
        int right =sum;
        if(k > nums.size()){
            return ans;
        }
        while(left<=right){
            int mid=left + (right-left)/2;
            if(isValid(nums,k,mid)){
                ans = mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};