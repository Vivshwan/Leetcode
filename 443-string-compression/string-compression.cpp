class Solution {
public:
    int compress(vector<char>& chars) {
        int s = chars.size();

        int idx =0;
        for(int i =0 ; i<s ; i++){
            char ch = chars[i];
            int count =0 ;
            while (i<s && chars[i] == ch ){
                count +=1;
                i++;
            }
            if (count==1){
                chars[idx++]=ch ;
            }
            else {
                string str = to_string(count);
                chars[idx++]=ch;
                for(char digit : str){
                    chars[idx++]=digit;
                }
            }
            i--;
        }
        return idx;
    }
};