// 155. Min Stack
use std::cmp::min;
struct Pair {
    val : i32,
    min : i32
}

struct MinStack {
    // inserting in pairs while maintaining minimum value in stack
    stack : Vec<Pair>,
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl MinStack {

    fn new() -> Self {
        MinStack{
            stack : Vec::new(),
        }
    }
    
    fn push(&mut self, val: i32) {
        let mut cur_min :i32 = i32::MAX;
        if let Some(p) = self.stack.last() {
            cur_min = p.min;
        }
        let p = Pair{
            val : val,
            min : min(cur_min,val)
        };
        self.stack.push(p);
    }
    
    fn pop(&mut self) {
        self.stack.pop();
    }
    
    fn top(&self) -> i32 {
        if let Some(p) = self.stack.last() {
            return p.val;
        }
        return 0;
    }
    
    fn get_min(&self) -> i32 {
        if let Some(p) = self.stack.last() {
            return p.min;
        }
        return 0;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * let obj = MinStack::new();
 * obj.push(val);
 * obj.pop();
 * let ret_3: i32 = obj.top();
 * let ret_4: i32 = obj.get_min();
 */