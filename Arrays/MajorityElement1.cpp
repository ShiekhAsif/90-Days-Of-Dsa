Problem :169. Majority Element
level: Easy
link:https://leetcode.com/problems/majority-element/description/
code ----------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int el=nums[0];
       int count=0;
       for(int i=0;i<n;i++){
         if(nums[i]==el){
            count++;
        }
        else if(count ==0 ){
            count=1;
            el=nums[i];
        }
        else{
            count--;
        }
       }
        return el;
    }
};