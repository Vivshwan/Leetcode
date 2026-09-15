class Solution {
public:
    bool isValid(vector<int>& nums, int days, int maxtime){
        int time=0;
        int shipment=1;
        for(int i =0; i<nums.size() ; i++){
            if (nums[i]+time<=maxtime){
                time+=nums[i];
            }
            else{
                time=nums[i];
                shipment++;
            }
        }
        return shipment<=days ? true : false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int left =0;
        int right =0;
        int ans =-1;
        for(int i = 0; i<n ;i++){
            right+=weights[i];
            left=max(weights[i],left);
        }
        while(left<=right){
            int mid = left+ (right-left)/2;
            if(isValid(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};