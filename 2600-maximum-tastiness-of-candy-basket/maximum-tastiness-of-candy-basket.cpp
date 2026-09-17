class Solution {
public:
    bool isPossible(vector<int>& price ,int k , int mid){
        int taste=1;
        int pos=price[0];
        for(int i =1; i<price.size() ; i++){
            if(price[i]-pos>=mid){
                taste+=1;
                pos=price[i];
            }
            if(taste==k){
                return true;
            }
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        int minimum =0;
        int n=price.size();
        sort(price.begin(),price.end());
        int maximum = price[n-1]-price[0]; 

        int left=minimum , right = maximum, ans=-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(!isPossible(price,k,mid)){
                right=mid-1;
            }
            else{
                ans =mid;
                left=mid+1;
            }

        }
        return ans;

    }
};