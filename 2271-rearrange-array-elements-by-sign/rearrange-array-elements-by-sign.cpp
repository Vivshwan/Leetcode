class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        int i =0;
        int j =1;
        vector<int> result(n);
        for(int &num : nums){
            if(num>0){
                result[i]=num;
                i+=2;
            }
            else{
                result[j]=num;
                j+=2;
            }
        }
        return result ;
        
    }
};