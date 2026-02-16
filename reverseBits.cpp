// Problem: Reversea bits
// Difficulty :Easy
// Plateform : leedcode 
// link:  https://leetcode.com/problems/reverse-bits/description/?envType=daily-question&envId=2026-02-16 
// code---

class Solution {
public:
    int reverseBits(int n) {
         unsigned int result = 0;

    for (int i = 0; i < 32; i++) {
        result = result << 1;      
        result |= (n & 1);        
        n = n >> 1;               
    }
    return result;
    }
};