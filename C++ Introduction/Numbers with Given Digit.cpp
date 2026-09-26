//Problem

      /*Given two integers n and d. Return an array containing all the numbers between 0 to n that contain the specific digit d.
      
      Examples:
      
      Input: n = 20, d = 5
      Output: [5, 15]
      Explanation: For number till 20, 5 appears in 5 itself and 15.
      Input: n = 50, d = 2
      Output: [2, 12, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 32, 42]
      Explanation: For number till 50, 2 appears in all these numbers.
      Constraints:
      0 ≤ n ≤ 103
      0 ≤ d ≤ 9
        */

//Solution

vector<int> solve(int n, int d) {
    
    vector<int>p;
    
    for(int i=0; i<=n; ++i){
        int temp=i;
        if(i==0 && d==0){
            p.push_back(0);
        }
        while(temp>0){
            if(temp%10==d){
                p.push_back(i);
                break;
            }
            temp = temp/10;
        }
    
    }
    int m = p.size();
    if(m==0){
        p.push_back(-1);
    }
    return p;
}
