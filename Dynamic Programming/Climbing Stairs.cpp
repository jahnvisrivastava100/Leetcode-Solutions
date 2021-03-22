class Solution {
public:
   int climbStairs(int n) {
        int arr[n+1]; // here we created new array of n+1 index since The size of this table is defined by the number of subproblems.
      //There are a total of (N+1) subproblems for N stairs since we are considering the 0th step as well for our convenience
        for(int i=0;i<=n;i++)
        {
            arr[i]=0;    // here we make whole new array values to 0 
        }
        arr[1]=1; // here it''s base case of 1
        if(n>=2) arr[2]=2; //// here it''s base case of 2
        for(int i=3;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2]; // here we store the current value is summation of current value -1 and current value -2 like fibonacci
        }
        return arr[n];
        
    }
};
