use std::cmp::min;
use std::cmp::max;
impl Solution {
    pub fn max_area(height: Vec<i32>) -> i32 {
        let mut max_val :i32 = 0;

        let mut left : usize = 0;
        let mut right :usize = height.len() -1;

        let mut val : i32 = 0;

        while(left<right)
        {
            val = min(height[left],height[right])*(right  as i32 -left as i32);
            max_val = max(max_val,val);

            if (height[left]<=height[right]){
                left+=1;
            } else {
                right-=1;
            }

        }


        max_val
    }
}