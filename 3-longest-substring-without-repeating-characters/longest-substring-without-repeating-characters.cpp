class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.empty()) return 0;

        int result = 1;
        
        for (int i = 0; i < s.size() ; i++) {
            int current = 0;

            for (int j = i; j >= 0; j--) {
                bool duplicate = false;
                for (int k = j + 1; k <= i; k++) {
                    if (s[j] == s[k]) {
                        duplicate = true;
                        break;
                    }
                }

                if (duplicate) break;

                current++;
            }

            result = max(result, current);
        }
        return result;
    }
};