class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> sorted;
        int count = 0;
        int count1 = 0;
        int count2 = 0;
        for (int i=0; i< (nums1.size() + nums2.size()); i++) {
            if((count1 == nums1.size()) || (count2 == nums2.size())){
                break;
            }
            if(nums1[count1] <= nums2[count2]) {
                sorted.push_back(nums1[count1]);
                count++;
                count1++;
            } else {
                sorted.push_back(nums2[count2]);
                count++;
                count2++;
            }
        }
        while (count1 < nums1.size()) {
            sorted.push_back(nums1[count1]);
            count1++;
            count++;
        }
        while (count2 < nums2.size()) {
            sorted.push_back(nums2[count2]);
            count2++;
            count++;
        }
        double result;
        if ((count % 2) == 1) {
            result = sorted[trunc(count/2)];
        } else {
            result = (sorted[(count/2)] + sorted[(count/2)-1])/2.0;
        }
        return result;


    }
};