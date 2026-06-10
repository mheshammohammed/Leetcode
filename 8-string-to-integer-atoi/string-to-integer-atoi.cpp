class Solution {
public:

    bool isgood(char c){
        if ((!isdigit(c)) && (c != '-') && (c != '+') && (c != ' ')) {
            return false;
        }
        return true;
    }

    int myAtoi(string s) {

        long long answer = 0;

        if ((s.size()==0)) {
            return 0;
        }

        int current = 0;

        while(current < s.size() && isgood(s[current])){
            if(isdigit(s[current])){
                break;
            }
            current++;
            if (current >= s.size()){
                return 0;
            }
        }

        for (int i = 0; i<current-1; i++){
            if ((s[i]=='+') || (s[i]=='-')) return 0;
        }

        char sign = '+';
        if (current > 0){
            sign = s[current-1];
        }

        while(current < s.size() && isdigit(s[current])){

            answer *= 10;
            answer += s[current];
            answer -= '0';

            if (sign != '-' && answer > INT_MAX){
                return INT_MAX;
            }

            if (sign == '-' && -answer < INT_MIN){
                return INT_MIN;
            }

            current++;
        }

        if (sign == '-') {
            answer *= -1;
        }



        return answer;
    }
};