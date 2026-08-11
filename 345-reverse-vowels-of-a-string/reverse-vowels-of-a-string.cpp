class Solution {
public:
    string reverseVowels(string s) {
        int n =s.size();
        int i =0;
        string vowel="AaEeIiOoUu";
        string ans="";
        for( char c:s){
            if (vowel.find(c) != string::npos){
                ans+=c;
            }
        }
        int size= ans.size();
        int j =size -1;
        while(i<j){
            swap(ans[i],ans[j]);
            i++;
            j--;
        }
        int idx=0;
        for (int i = 0; i < s.length(); i++) {
            if (vowel.find(s[i]) != string::npos) {
                s[i] = ans[idx++];
            }
        }
        return s;
    }
};