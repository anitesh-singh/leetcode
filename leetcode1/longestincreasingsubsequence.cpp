// 300. longest increasing subsequence
// https://leetcode.com/problems/longest-increasing-subsequence/description/
/*class Solution {
public:
    int helper(int idx, int prev, vector<int>& nums, vector<vector<int>>& dp){
        if(idx==-1) return 0;

        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];

        int take = 0, notTake = 0;
        if(prev==-1){
            take = helper(idx-1, idx, nums, dp) + 1;
            notTake = helper(idx-1, prev, nums, dp);
        }
        else{
            notTake = helper(idx-1, prev, nums, dp);
            if(nums[idx]<nums[prev]){
                take = helper(idx-1, idx, nums, dp) + 1;
            }
        }

        return dp[idx][prev+1] = max(take, notTake);
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size()+1, -1));
        return helper(nums.size()-1, -1, nums, dp);
    }
};*/