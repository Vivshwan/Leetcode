class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // If mid is on an increasing slope, peak is to the right
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } 
            // If mid is on a decreasing slope, peak is to the left (or at mid)
            else {
                right = mid;
            }
        }
        
        return left;
    }
};