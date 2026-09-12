class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = 1;
        while(i<n-1 && j<n){
            if(arr[i]>arr[j]){
                return i ;
            }
            i++;
            j++;
        }
        return 0;
    }
};