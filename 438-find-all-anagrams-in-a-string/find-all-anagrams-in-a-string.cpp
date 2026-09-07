class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int k = p.length();

        if (k> n ) return{};

        vector<int> pFreq(26, 0 );
        vector<int> windowFreq(26,0);

        vector<int> result;

        for(char ch : p){
            pFreq[ch-'a']++;
        }        

        for(int i = 0 ; i<k ;i++){
            windowFreq[s[i] - 'a']++;
        }

        if(pFreq == windowFreq){
            result.push_back(0);
        }
        for(int i = k ; i< n ;i++){
            windowFreq[s[i]-'a']++;

            windowFreq[s[i-k]-'a']--;

            if(pFreq == windowFreq){
                result.push_back(i-k+1);
            }
        }
        return result;
    }
};