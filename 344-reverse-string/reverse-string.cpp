class Solution {
public:
    void reverseString(vector<char>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        while(st <= end){
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
    }
};