class Solution {
    vector<int> dp;

    int helper(int i, const vector<int>& nums) {
        if (i == 0) return dp[0] = nums[0];

        if (dp[i] != INT_MIN) return dp[i];

        // Either start new subarray at i, or extend previous subarray
        dp[i] = max(nums[i], nums[i] + helper(i - 1, nums));
        return dp[i];
    }

public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, INT_MIN);

        int result = nums[0];
        for (int i = 0; i < n; ++i) {
            result = max(result, helper(i, nums));
        }

        return result;
    }
};
