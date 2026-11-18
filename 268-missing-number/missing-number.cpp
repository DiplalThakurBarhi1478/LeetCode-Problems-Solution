class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int st = 0;
        int end = nums.size();

        while(st < end){
            int mid = st + (end - st)/2;

            if(nums[mid] == mid){
                st = mid + 1;
            }else{
                end = mid;
            }
        }

        return st;
    }
};