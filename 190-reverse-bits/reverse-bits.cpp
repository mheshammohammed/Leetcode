class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for (int i=0; i<32; i++) {
            if ((n%2) == 1) {
                result++;
                n--;
            }
            n/=2;
            if (i!=31) result*=2;
        }
        
        return result;
    }
};