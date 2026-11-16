// Line Sweep Problem: Zero Array Transformation

// as Given Intervals are overlapping, we can compute the difference array to store the value and compute the prefix sum
// we can iterate over the array and check if the prefix sum is zero


impl Solution {
    pub fn is_zero_array(nums: Vec<i32>, queries: Vec<Vec<i32>>) -> bool {
        let mut prefix_sum :Vec<i32> = vec![0;nums.len()+1];

        for q in queries.iter() {
            prefix_sum[q[0] as usize]-=1; // marking the start as -1;

            prefix_sum[q[1] as usize+1]+=1; // marking the end as incremented +1;
        }

        // compute the prefix sum for the queries 
        for i in (1..prefix_sum.len())
        {
            prefix_sum[i]+=prefix_sum[i-1];
        }

        for i in (0..nums.len())
        {
            if (nums[i]+prefix_sum[i]>0)
            {
                return false;
            }
        }

        return true;
    }
}