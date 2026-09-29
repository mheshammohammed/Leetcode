class Solution {
public:
    int hammingWeight(int n) {
        double d = n;
        if (d==0) return 0;
        else if (d==1) return 1;
        else if ((n % 2) == 1) return (1 + hammingWeight(floor(d/2)));
        else if ((n % 2) == 0) return (0 + hammingWeight(floor(d/2)));
        else return 0;
    }
};