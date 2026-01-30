class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int size = nums.size();
        bool numPlusOne = false;
        vector<bool> bools(size, false);
        for (int i = 0; i< size; i++) {
            if (nums[i] == 1) {
                bools[0] = 1;
            }
            if ((nums[i]<= size) && (nums[i] > 1)) {
                bools[nums[i] - 1] = 1;
            }
            if (nums[i] == size+1) {
                numPlusOne = true;
            }
        }
        for (int i = 0; i< size; i++) {
            if (bools[i] == 0) {
                return i+1;
            }
        }
        return size+1;
    }
};