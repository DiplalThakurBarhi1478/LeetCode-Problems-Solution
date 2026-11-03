class Solution {
public:
    int minMoves(vector<int>& nums) {
        // calculating the largest
        int largest = INT_MIN;
        for(int i{0}; i < nums.size(); i++){
            largest = max(largest, nums[i]);
        }

        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            while(nums[i] < largest){
                nums[i] += 1;
                count += 1;
            }
        }

        return count;


    }
};