//2016. Maximum Difference Between Increasing Elements

use std::cmp::min;
use std::cmp::max;
impl Solution {
    pub fn maximum_difference(nums: Vec<i32>) -> i32 {
        let mut min_num :i32 = nums[0];
        let mut result : i32 = 0;


        for i in 0..nums.len() {
            min_num = min(min_num,nums[i]);
            
            result = max(result,nums[i]-min_num);
        }

        if result == 0 {
            return -1;
        }
        return result;
    }
}