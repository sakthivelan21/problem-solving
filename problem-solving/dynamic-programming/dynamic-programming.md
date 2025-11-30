### Dynamic Programming Approach

1. Tabulation (Bottom-Up)
   - Build a table in a bottom-up manner, solving smaller subproblems first and using their solutions to construct solutions to larger subproblems.
   - Example: Fibonacci sequence, where you store previously computed values in an array.
2. Memoization (Top-Down)
   - Use recursion to solve the problem, but store the results of subproblems in a cache to avoid redundant computations.
   - Example: Calculating factorials or Fibonacci numbers with a recursive function that checks the cache before performing calculations.

#### Example: Fibonacci Sequence

##### 1. Recursive Approach (Without Optimization)

```cpp
#include <iostream>
using namespace std;

int fibonacci_recursive(int n) {
    // Base cases
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n = 5;
    cout << "Fibonacci(" << n << ") = " << fibonacci_recursive(n) << endl;
    return 0;
}
```

**Recursion Tree for `fibonacci_recursive(5)`:**

```
                    fib(5)
                   /      \
              fib(4)       fib(3)
             /    \        /    \
         fib(3)  fib(2)  fib(2) fib(1)
         /   \    /  \    /  \
     fib(2) fib(1) fib(1) fib(0) fib(1) fib(0)
      / \
  fib(1) fib(0)
```

**Problem**: `fib(3)` is calculated 2 times, `fib(2)` is calculated 3 times → exponential redundant work!

- **Time Complexity**: O(2^n) - exponential
- **Space Complexity**: O(n) - recursion stack depth

---

##### 2. Memoization (Top-Down DP)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int fibonacci_memo(int n, vector<int>& dp) {
    // Base cases
    if (n <= 1) {
        return n;
    }
    
    // Check if already computed
    if (dp[n] != -1) {
        return dp[n];
    }
    
    // Compute and store in dp array
    dp[n] = fibonacci_memo(n - 1, dp) + fibonacci_memo(n - 2, dp);
    return dp[n];
}

int fibonacci_memoization(int n) {
    vector<int> dp(n + 1, -1);  // Initialize dp array with -1
    return fibonacci_memo(n, dp);
}

int main() {
    int n = 5;
    cout << "Fibonacci(" << n << ") = " << fibonacci_memoization(n) << endl;
    return 0;
}
```

**How Memoization Works for n=5:**

```
Call fib(5):
  dp = [-1, -1, -1, -1, -1, -1]
  
  fib(5) → needs fib(4) + fib(3)
    fib(4) → needs fib(3) + fib(2)
      fib(3) → needs fib(2) + fib(1)
        fib(2) → needs fib(1) + fib(0)
          fib(1) = 1 (base case)
          fib(0) = 0 (base case)
        dp[2] = 1, return 1
        fib(1) = 1 (base case)
      dp[3] = 2, return 2
      fib(2) → dp[2] = 1 (cached!) ✓
    dp[4] = 3, return 3
    fib(3) → dp[3] = 2 (cached!) ✓
  dp[5] = 5, return 5

Final dp = [0, 1, 1, 2, 3, 5]
```

**Complexity Analysis:**
- **Time Complexity**: O(n) - each subproblem solved only once
- **Space Complexity**: O(n) - dp array of size n+1 + O(n) recursion stack = O(n)

---

##### 3. Tabulation (Bottom-Up DP)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int fibonacci_tabulation(int n) {
    if (n <= 1) {
        return n;
    }
    
    // Initialize dp array
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    
    // Build table from bottom-up
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    return dp[n];
}

int main() {
    int n = 5;
    cout << "Fibonacci(" << n << ") = " << fibonacci_tabulation(n) << endl;
    return 0;
}
```

**How Tabulation Works for n=5:**

```
Initial: dp = [0, 1, 0, 0, 0, 0]

i = 2: dp[2] = dp[1] + dp[0] = 1 + 0 = 1  → dp = [0, 1, 1, 0, 0, 0]
i = 3: dp[3] = dp[2] + dp[1] = 1 + 1 = 2  → dp = [0, 1, 1, 2, 0, 0]
i = 4: dp[4] = dp[3] + dp[2] = 2 + 1 = 3  → dp = [0, 1, 1, 2, 3, 0]
i = 5: dp[5] = dp[4] + dp[3] = 3 + 2 = 5  → dp = [0, 1, 1, 2, 3, 5]

Return dp[5] = 5
```

**Complexity Analysis:**
- **Time Complexity**: O(n) - single loop from 2 to n
- **Space Complexity**: O(n) - dp array of size n+1

---

##### Summary Comparison

| Approach | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Recursive | O(2^n) | O(n) |
| Memoization | O(n) | O(n) |
| Tabulation | O(n) | O(n) |

> **Note**: Tabulation is generally preferred as it avoids recursion stack overhead and can be optimized to O(1) space by keeping only the last 2 values.


#### 1-D Array DP Problems

#### How to Identify 1-D DP Problems

1. count the total number of ways to reach a certain state (e.g., number of ways to climb stairs).

2. which gives the minimum / maximum output from a series of choices (e.g., minimum cost to reach the end of an array).

3. try all possible ways comes in 

### How to solve 1-D DP Problems

1. Try to define the state (usually an index in an array).

2. Do all possible choices from that state according to the problem statement.

3. count all ways -> sum up all the ways from the choices.

4. min / max -> take the min / max from all the choices.
