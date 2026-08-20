class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1002,0);

        for(auto &trip: trips){
            int start = trip[1];
            int end = trip[2];

            diff[start]+=trip[0];
            diff[end]-=trip[0];
        }
        int sum = 0;
        for(int i = 0 ; i <=1000 ; i++){
            sum+=diff[i];
            if(sum>capacity){
                return false;
            }
        }
        return true ;
    }
};