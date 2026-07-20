class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        if (target > nums[nums.size() - 1]) {return nums.size();}
        if (target < nums[0]) {return 0;}

        return searchHelper(nums, target, 0, nums.size() - 1);
    }

    int searchHelper(vector<int>& nums, int target, int start, int end){
        if (nums[start] == target) {
            return start;
        }
        if (nums[end] == target) {
            return end;
        }
        if (start == end-1) {return end;}

        int middle = (start + end) /2;

        if (nums[middle] == target){
            return middle;
        }
        if (nums[middle] > target){
            return searchHelper(nums, target, start, middle);
        }
        if (nums[middle] < target){
            return searchHelper(nums, target, middle, end);
        }

        else return 0;
    }

};
        
    
       
