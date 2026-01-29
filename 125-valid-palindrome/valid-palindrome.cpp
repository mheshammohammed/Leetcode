class Solution {
public:
    bool isPalindrome(string s) {
        string k = s;
        int count = 0;
        for (int i = 0; i<s.size(); i++) {
            if (isalnum(s[i])) {
                k[count] = tolower(s[i]);
                count++;
            }
        }
        return helper(k, 0, count-1);
    }
    bool helper(const string& s, int start, int end) {
        if (start >= end) {return true;}
        if (s[start] != s[end]) {return false;}
        return helper(s, start+1, end-1);
    }

};