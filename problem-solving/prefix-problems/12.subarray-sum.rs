use std::collections::HashMap;

impl Solution {
    pub fn subarray_sum(nums: Vec<i32>, k: i32) -> i32 {
        let mut map : HashMap<i32,i32>  = HashMap::new();

        let mut prefix : Vec<i32> = vec![0;nums.len()];
        prefix[0] = nums[0];
        let mut count : i32 = 0;
        for i in 1..nums.len() {
            prefix[i] += prefix[i-1] + nums[i];
        }

        for i in 0..nums.len() {

            if (prefix[i]==k) {
                count +=1;
            }

            // check if nums[i]-k is present , which means sub array is present with count of k 

            if let Some(c) = map.get(&(prefix[i]-k)) {
                count += c;
            }

            if let Some(c) = map.get(&prefix[i]) {
                map.insert(prefix[i],c+1);
            } else {
                map.insert(prefix[i],1);
            }

        }

        return count;

    }
}