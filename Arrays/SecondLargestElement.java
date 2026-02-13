// Problem name: second largest element in array
// problem level : easy
// link:https://www.geeksforgeeks.org/problems/second-largest3735

class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int max=Integer.MIN_VALUE;
        int sec=max;
        for(int i=0;i<arr.length;i++){
            if(max<arr[i]){
                sec=max;
                max=arr[i];
            }
            else if(sec<arr[i]&& max!=arr[i]){
                sec=arr[i];
            }
        }
        
        if(sec== Integer.MIN_VALUE){
            sec=-1;
        }
        return sec;
    }
}

