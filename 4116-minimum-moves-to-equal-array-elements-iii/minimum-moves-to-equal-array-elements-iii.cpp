class Solution {
public:
    int minMoves(vector<int>& nums) {
        // calculating the largest
        sort(nums.begin(), nums.end());

        int largest = nums[nums.size() - 1];

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