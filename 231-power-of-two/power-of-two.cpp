class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0) return false;
        if (n==1) return true;
        long k = 1;
        while (k<n) {
            k*=2;
        }
        if (k==n) return true;
        else return false;
    }
};