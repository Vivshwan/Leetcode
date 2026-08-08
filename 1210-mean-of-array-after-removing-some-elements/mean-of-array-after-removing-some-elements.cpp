class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double size=arr.size();
        double n= (size*5)/100;
        int sum =0;
        for(int i =n;i<size-n;i++){
            sum+=arr[i];
        }
        double mean = sum/(size-(2*n));
        return mean ;
    }
};