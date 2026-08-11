class Solution {
public:
    string reversePrefix(string word, char ch) {
        int size = word.size();
        
        // for(int i =0 ; i<size ; i++){
        //     if (ch == word[i]){
        //         n = i ;
        //         break ;
        //     }
        // }
        int n = word.find(ch);
        if (n==string::npos){
            return word;
        }
        // if (n == 0 ){
        //     return word ;
        // }
        int i =0 ;
        int j = n ;
        while (i<j){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word ;
    }
};