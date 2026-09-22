class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].size();
        int numWords = words.size();
        int totalLen = wordLen * numWords;
        int n = s.size();

        if (n < totalLen) return result;

        // Frequency count of required words
        unordered_map<string, int> required;
        for (const string& w : words) required[w]++;

        
        for (int i = 0; i < wordLen; i++) {
            int left = i;
            int count = 0;
            unordered_map<string, int> window;

        
            for (int j = i; j + wordLen <= n; j += wordLen) {
                string word = s.substr(j, wordLen);

                if (required.count(word)) {
                    window[word]++;
                    count++;

                   
                    while (window[word] > required[word]) {
                        string leftWord = s.substr(left, wordLen);
                        window[leftWord]--;
                        count--;
                        left += wordLen;
                    }

                 
                    if (count == numWords) {
                        result.push_back(left);

                        
                        string leftWord = s.substr(left, wordLen);
                        window[leftWord]--;
                        count--;
                        left += wordLen;
                    }
                } else {
                   
                    window.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }

        return result;
    }
};