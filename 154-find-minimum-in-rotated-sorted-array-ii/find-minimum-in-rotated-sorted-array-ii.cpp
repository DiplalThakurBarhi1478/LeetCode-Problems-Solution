class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = INT_MAX;
        int st = 0; 
        int end = nums.size() - 1;

        while(st <= end){
            int mid = st + (end - st)/2;

            if(nums[st] == nums[mid]){
                minimum = min(minimum, nums[st]);
                st++;
                mid--;
            }
            else if(nums[st] < nums[mid]){
                minimum = min(minimum, nums[st]);
                st = mid + 1;
            }else{
                minimum = min(minimum, nums[mid]);
                end = mid - 1;
            }
        }

        return minimum;
    }
};