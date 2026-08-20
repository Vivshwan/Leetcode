class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> diff(102);

        for(auto &cars : nums){
            int start = cars[0];
            int end = cars[1];

            diff[start]+=1;
            diff[end+1]-=1;
        }
        int curr=0 , count=0;
        for(int i = 0 ; i<=100 ;i++){
            curr+=diff[i];
            if(curr>0){
                count++;
            }
        }
        return count; 
    }
};