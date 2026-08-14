class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i = 0 ;  
        int j = 0, r = 0;
        int n = s.length();
        while(i< n){
            while(i<n && s[i] != ' '){
                s[r++]=s[i++];
            }
            if(j<r){
                reverse(s.begin()+j,s.begin()+r);
                s[r]=' ';
                r++;
                j=r;
            }
            i++;
        }
        s =s.substr(0,r-1);
        return s;

    }
};