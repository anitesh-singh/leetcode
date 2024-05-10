// 1143. longest common subsequence
// https://leetcode.com/problems/longest-common-subsequence/description/
/*class Solution {
public:
    int helper(int i, int j, string& text1, string& text2, vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        if(text1[i]==text2[j]) return dp[i][j] = helper(i-1, j-1, text1, text2, dp) + 1;
        else{
            return dp[i][j] = max(
                helper(i-1, j, text1, text2, dp),
                helper(i, j-1, text1, text2, dp)
            );
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
        return helper(text1.size()-1, text2.size()-1, text1, text2, dp);
    }
};*/