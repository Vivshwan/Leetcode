class Solution {
public:
   bool isVowel(char &ch){
    if (ch == 'a'||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
        return true ;
        }
        return false;
   }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int Q=queries.size();
        int S=words.size();

        vector<int> prefix(S);
        vector<int> result(Q);
        int sum=0;
        for(int i= 0;i<S;i++){
            if(isVowel(words[i][0]) && isVowel(words[i].back()))  {
                sum++;
            }
        
            prefix[i]=sum;
            
        }
        for(int i = 0 ; i<Q; i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if (left == 0 ){
                result[i]=prefix[right];
            }
            else{
                result[i]=prefix[right]-prefix[left-1];
            }
        }
        return result;
    }
};