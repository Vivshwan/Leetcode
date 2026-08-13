class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> keyelement;
        vector<int> result;
        for(int i = 0;i <n ; i++){
            if (nums[i]==key){
                keyelement.push_back(i);
            }
        }
        int size=keyelement.size();
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ; j<size;j++){
                if( abs(i- keyelement[j]) <=k ){
                    result.push_back(i);
                    break;               
                }
            }
        }
        return result;
    }
};