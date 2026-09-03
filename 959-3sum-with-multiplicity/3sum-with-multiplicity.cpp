class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        const int MOD = 1e9 + 7;
        const int MAX = 100;

        vector<long long> freq(MAX + 1, 0);
        for(int num : arr){
            freq[num]++;
        }
        
        long long result =0;

        for(int i =0 ; i <= MAX ; i++){
            for(int j=i ; j<=MAX ; j++){
                int k = target -i-j;

                if (k<j || k>MAX) continue;

                if(freq[i] == 0 || freq[j] == 0 || freq[k] == 0) continue;

                if(i==j && j==k){
                    result+= comb3(freq[i]);
                }
                else if (i==j){
                    result += comb2(freq[i])* freq[k];
                }
                else if ( j==k){
                    result += comb2(freq[j])*freq[i];
                }
                else{
                    result += freq[i]*freq[j]*freq[k];
                }

                result %= MOD;
            }
        }
        return (int)result;
    }
    private:
        long long comb2(long long n){
            return n*(n-1)/2;
        }
        long long comb3(long long n ){
            return n* (n-1)* (n-2) / 6;
        }
};