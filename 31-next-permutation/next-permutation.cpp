class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 2;
        int pivot = -1;

        // pivot point
        for(int i = n; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                pivot = i;
                break;
            }
        }

        // if the array is largest then reversing to get the smallest
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // then finding the rightmost greater value
        for(int i = nums.size() - 1; i >= pivot + 1; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        
        //swaping all those right part of the pivot to get the smallest
        int st = pivot + 1;
        int end = nums.size() - 1;

        while(st <= end){
            swap(nums[st], nums[end]);
            end--;
            st++;
        }

    }
};