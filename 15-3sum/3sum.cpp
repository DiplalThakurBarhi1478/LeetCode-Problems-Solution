
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> vec;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 2; i++){

            // Skip duplicate fixed elements
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int st = i + 1;
            int end = n - 1;

            while(st < end){

                int sum = nums[i] + nums[st] + nums[end];

                if(sum == 0){

                    vec.push_back({nums[i], nums[st], nums[end]});

                    st++;
                    end--;

                    // Skip duplicate left elements
                    while(st < end && nums[st] == nums[st-1]){
                        st++;
                    }

                    // Skip duplicate right elements
                    while(st < end && nums[end] == nums[end+1]){
                        end--;
                    }
                }
                else if(sum < 0){
                    st++;
                }
                else{
                    end--;
                }
            }
        }
        return vec;
    }
};
