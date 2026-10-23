//Problem

      /*Given an array arr[] of integers, find and return the elements with even occurrences in the array. If no such element exists, return -1. Elements should be returned in order of occurrence.
      
      Examples:
      
      Input: arr[] = [9, 12, 23, 10, 12, 12, 15, 23, 14, 12, 15]
      Output: [12, 15, 23]
      Explanation: The numbers 12, 15, and 23 each appear an even number of times.
      Input: arr[] = [23, 12, 56, 34, 32]
      Output: [-1]
      Explanation: Every number in the array occurs an odd number of times.
      Constraints:
      1 ≤ arr.size() ≤ 106
      1 ≤ arr[i] ≤ 105
      
      */

//Solution

class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int>v;
        int frequency[100001]={0};
        for(int i=0; i<n; ++i){
            int x = arr[i];
            frequency[x]++;
        }
        
        for(int i=0; i<n; ++i){
            int cv = arr[i];
            if(frequency[cv]>0 && frequency[cv]%2==0){
                v.push_back(cv);
                frequency[cv]=0;
            }
        }
        if(v.size()==0){
            return{-1};
        }
        return v;
    }
};
