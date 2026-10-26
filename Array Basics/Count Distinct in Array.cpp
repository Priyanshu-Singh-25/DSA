//Problem

      /*Given an integer array arr[], return the count of all the distinct elements in an array
      
      Examples:
      
      Input: arr[] = [2, 2, 3, 2]
      Output: 2
      Explanation: Distinct elements are {2, 3}
      Input: arr[] = [12, 1, 14, 3, 16]
      Output: 5
      Explanation: Distinct elements are {12, 1, 14, 3, 16}
      Input: arr[] = [1, 1, 1, 1]
      Output: 1
      Explanation: Only one distinct element {1}  
      Constraints:
      
      1 ≤ arr.size() ≤ 105
      -105 ≤ arr[i] ≤ 105
        */

//Solution

int distinct(vector<int>& arr) {
    // Your code here
    unordered_set<int>us;
    for(int i=0; i<arr.size(); ++i){
        us.insert(arr[i]);
    }
    int res = us.size();
    return res;
}
