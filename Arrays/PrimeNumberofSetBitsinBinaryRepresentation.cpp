// Problem:Prime Number of Set Bits in Binary Representation
// difficult:easy
// link:https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/description/?envType=daily-question&envId=2026-02-21
// code----


class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int>prime = 
        {2,3,5,7,11,13,17,19,23,29,31};
        
        int ans = 0;
        
        for(int i = left; i <= right; i++){
            int count = __builtin_popcount(i);
            
            if(prime.count(count))
                ans++;
        }
        
        return ans;
    }
};