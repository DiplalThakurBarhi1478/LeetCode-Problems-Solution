class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        // First occurrence
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                first = mid;
                end = mid - 1;
            }
        }

        // Last occurrence
        start = 0;
        end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                last = mid;
                start = mid + 1;
            }
        }

        return {first, last};
    }
};