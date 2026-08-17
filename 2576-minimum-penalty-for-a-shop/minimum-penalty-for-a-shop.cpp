class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        vector<int> prefix(n+1,0);
        vector<int> suffix(n+1,0);

        for(int i =0 ; i<n ;i++){
            prefix[i+1]=prefix[i]+(customers[i]=='N'?1:0);
        }
        for(int j=n-1 ; j>=0 ; j--){
            suffix[j]=suffix[j+1]+(customers[j]=='Y'?1:0);
        }

        int min = INT_MAX;
        int besthour = 0;

        for(int i =0; i<=n ; i++){
            int penalty = prefix[i] + suffix[i];
            if(penalty < min){
                min =  penalty;
                besthour = i;
            }
        }
        return besthour;
    }
};