use std::collections::HashSet;
 use std::cmp::max;
impl Solution {
    pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
        
        let mut set : HashSet<i32> =  HashSet::new();
        let mut max_length = 0;
        let mut num :i32 = 0;
        let mut count :i32 = 0;
        for i in (0..nums.len())
        {
            set.insert(nums[i]);
        }

        for item in &set {
            // ensure if it's the start value 
            num = *item;
            if set.contains(&(num-1)) == false {
                count = 1;
                num+=1;
                while (set.contains(&num)){
                    count+=1;
                    num+=1;
                }
                max_length = max(max_length,count);
            }
        }

        return max_length;
    }
}