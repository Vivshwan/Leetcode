class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int left =0;
        int mid=0;
        int right= n-1;
        while (mid <= right){
            int x = nums[mid];
            if(x == 1 ) mid++;
            else if(x == 0) {
                swap(nums[left],nums[mid]);
                left++;
                mid++;
            }  
            else {
                swap(nums[mid],nums[right]);
                right--;
            }
        }
    }    
};