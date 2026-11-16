// 20. Valid Parentheses

impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack : Vec<char> = Vec::new() ;

        for c in s.chars() {
                
            if let Some(value) = stack.last() {
                if (*value =='(' && c==')' || *value =='{' && c=='}' || *value =='[' && c==']') {
                    stack.pop();
                    continue;
                } 
            }
             else if (c==')' || c=='}' || c==']') {
                return false;
            } 
            stack.push(c);
        }
        // println!("stack is {:?}",stack);
        return stack.is_empty();
    }
}