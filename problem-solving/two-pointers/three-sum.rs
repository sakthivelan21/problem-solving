use std::collections::HashMap;

impl Solution {
    pub fn three_sum(mut nums: Vec<i32>) -> Vec<Vec<i32>> {
        nums.sort();

        let mut map: HashMap<i32, usize> = HashMap::new();
        let mut result: Vec<Vec<i32>> = Vec::new();

        for i in 0..nums.len() {
            map.insert(nums[i], i);
        }
        let mut i : usize= 0;
        while i < nums.len()-2 {
            if nums[i] > 0 {
                break;
            }
            let mut j = i+1;
            while(j<nums.len()-1) {
                let sum = - (nums[i] + nums[j]);

                if let Some(&k) = map.get(&sum) {
                    if k > j {
                        result.push(vec![nums[i], nums[j], sum]);
                    }
                }
                j = *map.get(&nums[j]).unwrap() as usize;
                j+=1;
            }
            i = *map.get(&nums[i]).unwrap() as usize;
            i+=1;

        }

        result
    }
}
