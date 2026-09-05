class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int size= s.length();
        string ans= "";

        for(int i=0 ; i<size ; i++){    
            string word ="";
            while(i<size && s[i]!=' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};