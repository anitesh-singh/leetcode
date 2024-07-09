//find all duplicates in an array
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

//treating the elements as an index

//first way time complexity O(N)
 /*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        
        for(int n:nums){
            n=abs(n);       //HERE the n is the elements, 
            if (nums[n-1]>0){nums[n-1]*=-1;}
            else {result.push_back(n);}
        }
        return result;
    }
};*/

//second way time complexity O(N)
/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        for(int n=0;n<nums.size();n++){
            int index=abs(nums[n]);
            if (nums[index-1]>0){nums[index-1]*=-1;}
            else {result.push_back(index);}
        }
        
        return result;
    }
};*/

//third way time complexity O(NlogN) by sorting and comparing the elements
/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>num;
        sort (nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++){
            if (nums[i]==nums[i-1]){
                num.push_back(nums[i]);
            }
        }
        return num;
    }
};*/