class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0) {return 0;}
        if (s.size() == 1) {
            if (s[0] == ' ') {return 0;} else {return 1;}
        }
        int length=0;
        int index=0;
        if (s[0] == ' ') {index = 1;} else {index = 0; length = 1;}
        for (int i=1; i< s.size(); i++) {
            if ((s[i] != ' ') && (s[i-1] == ' ')) {
                index = i;
                length = 0;
            }
            if (s[i] != ' ') {length++;}
        }
        return length;
    }
};