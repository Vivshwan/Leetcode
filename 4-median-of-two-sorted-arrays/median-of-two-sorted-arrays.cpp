class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
        int m =nums2.size();
        for (int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int total=m+n;
        if (total%2==0){
            int a=total/2;
            int b=a+1;
            float median = (nums1[a-1]+nums1[b-1])/2.0;
            return median;
        }
        else {
            int a=(total+1)/2;
            float median=nums1[a-1];
            return median;
        }


    }
};