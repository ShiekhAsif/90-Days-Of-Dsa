// Problem:Maximum Subarray
// difficulity:medium;
// link:https://leetcode.com/problems/maximum-subarray/description/            
// code--

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0];
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if(sum<0)sum=0;
        }
        return maxSum;
    }
};