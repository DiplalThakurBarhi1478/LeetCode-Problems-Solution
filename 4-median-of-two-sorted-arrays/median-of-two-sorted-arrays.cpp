class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int t = m + n;

        for(int i = 0; i < n; i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int st = 0;
        int end = t - 1;

        if(end % 2 == 0){ // odd
            int mid = end/2;
            return nums1[mid];
        }else{ // even
            int mid = end/2;
            double ans = (nums1[mid] + nums1[mid + 1])/2.0;
            return ans;
        }

    return -1;
    }
};