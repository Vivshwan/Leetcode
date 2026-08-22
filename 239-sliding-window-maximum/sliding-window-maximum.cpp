class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> dq;
        
        for (int i = 0; i < nums.size(); i++) {
            // Remove elements outside window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            
            // Maintain decreasing order in deque
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            // First window starts from index k-1
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};