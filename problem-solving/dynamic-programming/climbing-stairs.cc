/*
================================================================================
PROBLEM: Climbing Stairs (LeetCode #70)
================================================================================

You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps.
In how many distinct ways can you climb to the top?

Example 1:
  Input: n = 2
  Output: 2
  Explanation: There are two ways to climb to the top.
    1. 1 step + 1 step
    2. 2 steps

Example 2:
  Input: n = 3
  Output: 3
  Explanation: There are three ways to climb to the top.
    1. 1 step + 1 step + 1 step
    2. 1 step + 2 steps
    3. 2 steps + 1 step

Constraints:
  - 1 <= n <= 45

================================================================================
ANALYSIS
================================================================================

1. This is a "count total ways" problem → DP pattern
2. At each step, we have 2 choices: climb 1 step OR climb 2 steps
3. Ways to reach step n = Ways to reach (n-1) + Ways to reach (n-2)
   - From step (n-1), take 1 step to reach n
   - From step (n-2), take 2 steps to reach n
4. This forms the Fibonacci sequence!
   - f(1) = 1 (one way: 1 step)
   - f(2) = 2 (two ways: 1+1 or 2)
   - f(n) = f(n-1) + f(n-2)

Recursion Tree for n=4:
                    climb(4)
                   /        \
              climb(3)      climb(2)
             /      \        /    \
        climb(2)  climb(1) climb(1) climb(0)
        /    \
   climb(1) climb(0)

Time & Space Complexity:
  - Recursive:    O(2^n) time, O(n) space (stack)
  - Memoization:  O(n) time, O(n) space (dp array + stack)
  - Tabulation:   O(n) time, O(n) space (dp array)
  - Optimized:    O(n) time, O(1) space (2 variables)

================================================================================
*/
class Solution {
public:
    // dfs trying to mimic question brute force
    void dfs(int index,int &length,int &result)
    {
        if(index>=length-1)
        {
            result++;
            return;
        }

        dfs(index+1,length,result);
        dfs(index+2,length,result);
    }
    // recursion
    int fibonacci(int n) {

        if(n<=1)
            return 1;
        
        return fibonacci(n-1) + fibonacci(n-2);
    }

    // recursion + memoization (Top Down Approach)
    int fibonacci_memoization(int n , vector<int> &dp)
    {
        if(n<=1)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];

        int result = fibonacci_memoization(n-1,dp) + fibonacci_memoization(n-2,dp);
        dp[n] = result;
        return result;
    }

    // recursion + tabulazation ( Bottom up Approach)
    int fibonacci_tabulation(int n) {
        
        vector<int> dp(n+1,0);

        dp[0]=0;
        dp[1]=1;

        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];

    }

    int climbStairs(int n) {
        
        // int result =0;

        // dfs(0,n,result);

        // vector<int> dp(n+1,-1);
        // return fibonacci_memoization(n-1,dp);

        return fibonacci_tabulation(n+1);
    }
};