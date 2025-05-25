struct NumArray {
    array: Vec<i32>
}


/** 
 * 303. Range Sum Query - Immutable
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl NumArray {

    fn new(nums: Vec<i32>) -> Self {
        let mut prefix : Vec<i32> = vec![0;nums.len()];

        prefix[0] = nums[0];

        for i in (1..nums.len())
        {
            prefix[i] += prefix[i-1] + nums[i];
        }

        println!("prefix array is {:?}",prefix);

        return NumArray {
            array : prefix
        };
    }
    
    fn sum_range(&self, left: i32, right: i32) -> i32 {
        if left-1 <0 {
            return self.array[right as usize];
        }
        return self.array[right as usize] - self.array[(left -1) as usize];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * let obj = NumArray::new(nums);
 * let ret_1: i32 = obj.sum_range(left, right);
 */