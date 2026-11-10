//Problem

      /*Given an array arr[] of size n, count the number of triplets (arr[i], arr[j], arr[k]) such that:
      
      arr[i] < arr[j] < arr[k]
      i < j < k
      These triplets are called Magic Triplets.
      
      Examples :
      
      Input: arr[] = [1, 2, 3, 4]
      Output: 4
      Explanation: Fours magic triplets are (1, 2, 3), (1, 2, 4), (1, 3, 4) and (2, 3, 4).
      Input: arr[] = [3, 2, 1]
      Output: 0
      Explanation: There is no magic triplet.
      Constraints:
      
      1 ≤ arr.size() ≤ 103
      1 ≤ arr[i] ≤ 106
        */

//Solution

class Solution {
  public:
    int countTriplets(vector<int> &arr) {
        int n=arr.size();
        int totalCount=0;
        
        for(int j=1; j<n-1; ++j){
            int smaller=0;
            for(int i=0; i<j; ++i){
                if(arr[i]<arr[j]){
                    smaller++;
                }
            }
            
            int greater=0;
            for(int k=j+1; k<n; ++k){
                if(arr[k]>arr[j]){
                    greater++;
                }
            }
            
            totalCount+=smaller*greater;
        }
        return totalCount;
    }
};
