// 42. Trapping Rain Water
impl Solution {
    pub fn trap(nums: Vec<i32>) -> i32 {
        let mut max_left :i32 = 0;
        let mut max_right :i32 = 0;
        let mut result : i32 = 0;
        let mut left :usize = 0;
        let mut right :usize = nums.len() -1;

        while(left<=right)
        {
            if(nums[left]<=nums[right])
            {
                if (nums[left]>=max_left)
                {
                    max_left = nums[left];
                }
                else 
                {
                    result += max_left - nums[left];
                }
                left +=1;
            }
            else {
                if(nums[right]>=max_right)
                {
                    max_right = nums[right];
                }
                else {
                    result += max_right - nums[right];
                }
                right-=1;
            }
        }

        result
    }
}