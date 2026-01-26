class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if (N<0) {
            return helper((1/x),(-N));
        }
        return helper(x, N);
    }

    double helper(double x, long long n) {
        if (n==0) {return 1;}
        if (n==1) {return x;}
        double split = (helper(x,n/2));
        if (n%2 == 0) return split * split;
        return (split * split * x);
    }
};