class Solution {
public:
    bool isFreqSame(int f1[], int f2[]){
        for(int i = 0 ; i < 26 ; i++){
            if (f1[i]!=f2[i]){
                return false ;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int s = s1.length();
        int n = s2.length();

        int freq[26]={0};
        for(int i =0 ; i < s ; i++){
            freq[s1[i]-'a']++;
        }

        for(int i =0; i<n ;i++){
            int windowidx=0;
            int idx =i ;
            int windowfreq[26]={0};
            while(windowidx < s && idx < n){
                windowfreq[s2[idx]-'a']++;
                windowidx++;
                idx++;
            }
            if (isFreqSame(freq,windowfreq)){
                return true;
            }

        }
        return false;
    }
};