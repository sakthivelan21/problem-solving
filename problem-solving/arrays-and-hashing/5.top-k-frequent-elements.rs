use std::collections::HashMap;
use std::collections::BinaryHeap;

impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
        let mut map : HashMap<i32,i32> = HashMap::new();

        let mut result : Vec<i32> = Vec::new();

        let mut pq  = BinaryHeap::new();

        let mut count = k;

        for num in nums.iter() {
            if let Some(count) = map.get(num) {
                map.insert(*num,count+1);
            }
            else {
                map.insert(*num,1);
            }
        }

        for (key, value) in map.into_iter() {
            pq.push((value,key));
        }

        while(!pq.is_empty() && count>0) 
        {
            if let Some(top) = pq.peek(){
                result.push(top.1);
            }

            pq.pop();
            count-=1;
        }

        pq.clear();

        // map.clear();

        return result;

    }
}