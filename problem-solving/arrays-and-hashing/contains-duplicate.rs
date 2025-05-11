use std::collections::HashMap;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut map: HashMap<i32,bool> = HashMap::new();


        for i in nums.iter(){
            if map.contains_key(i){
                return true;
            }
            // gives borrow to the map
            map.insert(*i,true);
        }

        return false;
    }
}