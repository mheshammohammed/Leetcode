class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if (m==0) {
            nums1 = nums2; 
            return;
        }

        if (n==0) {
            return;
        }

        vector<int> output; 

        int index1 = 0;
        int index2 = 0;

        while ((index1 != m) && (index2 != n)) {
            if (nums1[index1] < nums2[index2]) {
                output.push_back(nums1[index1]);
                index1++;
            } else {
                output.push_back(nums2[index2]);
                index2++;
            }
        }
        
        while (index1 != m) {
            output.push_back(nums1[index1]);
            index1++;
        }

        while (index2 != n) {
            output.push_back(nums2[index2]);
            index2++;
        }

        nums1 = output;

    }
};