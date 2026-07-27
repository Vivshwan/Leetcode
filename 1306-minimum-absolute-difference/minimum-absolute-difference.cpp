class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int diff= INT_MAX;

        for(int i = 0 ; i <n-1 ; i++){
            int val=abs(arr[i+1]-arr[i]);
            diff=min(diff,val);
        }

        vector<vector<int>> result;

        for(int i = 0 ; i <n-1;i++){
            if(arr[i+1]-arr[i]==diff){
                result.push_back({arr[i],arr[i+1]});
            }

        }
        return result;
    }
};