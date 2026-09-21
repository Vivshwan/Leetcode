class Solution {
public:
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.size(), k);
    }
    
    int helper(string& s, int start, int end, int k) {
        if (end - start < k) return 0;
        
        int count[26] = {0};
        for (int i = start; i < end; i++) count[s[i] - 'a']++;
        
        for (int i = start; i < end; i++) {
            if (count[s[i] - 'a'] < k) {
                
                int left = helper(s, start, i, k);
                int right = helper(s, i + 1, end, k);
                return max(left, right);
            }
        }
        return end - start;  
    }
};