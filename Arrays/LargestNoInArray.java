//Problem name :  Largest in Array
// Difficulity: Easy
//link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

// code
class Solution {
    public static int largest(int[] arr) {
        // code here
        int maxValue=Integer.MIN_VALUE;
        for (int i=0;i<arr.length;i++){
            if(maxValue<arr[i]){
                maxValue=arr[i];
            }
        }
        return maxValue;
    }
}
