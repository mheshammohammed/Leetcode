#include <stack>
#include <string>

class Solution {
public:

    bool isMatching (char a, char b){

        if((a == '{') && (b == '}')) return true;
        if((a == '}') && (b == '{')) return true;
        if((a == '(') && (b == ')')) return true;
        if((a == ')') && (b == '(')) return true;
        if((a == '[') && (b == ']')) return true;
        if((a == ']') && (b == '[')) return true;

        return false;


    }


    bool isValid(string s) {
        stack<char> a;
        int length = s.size();

        for (int i = 0; i<length; i++) {
            if ((s[i] ==  '(') || (s[i]=='[') || (s[i] == '{')) {
                a.push(s[i]);
            } else {
                if (a.empty()) return false;
                char temp = a.top();
                a.pop();

                if (!isMatching(temp, s[i])) {
                    return false;
                }
            }
        }

        if (!(a.empty())) return false;

        return true;

    }
};