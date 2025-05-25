use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut map: HashMap<i32, usize> = HashMap::new(); // store number -> index
        let mut vector = vec![0, 0];

        let mut diff :i32 = 0;

        for (i, num) in nums.iter().enumerate() {
            diff = target - num;
            if let Some(&idx) = map.get(&diff) {
                vector[0] = idx as i32;
                vector[1] = i as i32;
                return vector;
            }
            map.insert(*num, i);
        }

        vector
    }
}
