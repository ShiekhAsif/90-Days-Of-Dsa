// Name:Remove Duplicates from Sorted Array
// Level:Easy
// PlateForm:https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

//  cpp code 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0;
    int n=nums.size();
    int j=1;
    while(j<n){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
        j++;
    }
    return i+1;
    }
};