class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;

        // Merge both arrays
        for (int i = 0; i < nums1.size(); i++) {
            arr.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            arr.push_back(nums2[i]);
        }

        // Sort the merged array
        sort(arr.begin(), arr.end());

        int len = arr.size();
        int mid = len / 2;

        if (len % 2 == 0) {
            // Even length → take average of middle two
            return (arr[mid - 1] + arr[mid]) / 2.0;
        } else {
            // Odd length → return middle element
            return arr[mid];
        }
    }
};
