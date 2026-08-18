class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();

        vector<int> prefix(n,0) ;
        vector<int> suffix(n,0);

        for(int i = 1; i<n ; i++){
            if (security[i]<=security[i-1]){
                prefix[i]=prefix[i-1] + 1;
            }
            else{
                prefix[i]=0;
            }
        }
        for(int i = n-2 ; i>=0 ; i--){
            if (security[i]<=security[i+1]){
                suffix[i]=suffix[i+1] + 1;
            }
            else{
                suffix[i]=0;
            }

        }
        
        vector<int> result;
        for(int i = time; i<n-time; i++){
            if(prefix[i]>=time && suffix[i]>=time){
                result.push_back(i);
            }
        }
        return result;
    }
};