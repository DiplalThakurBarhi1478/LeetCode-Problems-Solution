class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[st] <= nums[mid]){  // left sorted
                if(nums[st] <= target && target <= nums[mid]){ // binary search in the left
                    end = mid - 1;
                }else{                  // binary search in the right unsorted part
                    st = mid + 1;
                }
            }else{ // right sorted
                if(nums[mid] <= target && target <= nums[end]){ // binary search in the right 
                    st = mid + 1;
                }else{  // binary search in the left unsorted part
                    end = mid - 1;
                }
            }
        }
    return -1;
    }
};