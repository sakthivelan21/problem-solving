use std::collections::HashMap;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {

        if(s.len() != t.len()){
            return false;

        }

        let mut map : HashMap<char,i32> = HashMap::new();

        for c in s.chars(){
            if let Some(count) = map.get(&c) {
                map.insert(c,count+1);
            }
            else {
                map.insert(c,1);
            }
        }

        for c in t.chars(){
            if let Some(count) = map.get(&c) {
                if (*count<=0){
                     return false;

                }
                map.insert(c,count-1);
            }
            else {
                return false;
            }
        }

        return true;
    }
}