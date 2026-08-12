class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int> result(n);
        int a =0;
        int mid=0;
        int equal=0;

        for(int i =0; i<n ; i++){
            if (nums[i]<pivot){
                mid++;
            }
            else if (nums[i]==pivot){
                equal++;
            }

        }
        int j = mid;
        int k = mid +equal;
        for(int num :nums){
            if (num<pivot){
                result[a]=num;
                a++;
            }
            else if (num==pivot){
                result[j]=num;
                j++;
            }
            else{
                result[k]=num;
                k++;
            }

        }
        return result;

    }
};