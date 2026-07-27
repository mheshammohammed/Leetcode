/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        return guessHelper(1, n);
    }

    int guessHelper(int left, int right) {
        int mid = left + (right - left) / 2;

        if (guess(mid) == 0) {
            return mid;
        }
        if (guess(mid) == -1) {
            return guessHelper(left, mid - 1);
        }
        return guessHelper(mid + 1, right);
    }
};