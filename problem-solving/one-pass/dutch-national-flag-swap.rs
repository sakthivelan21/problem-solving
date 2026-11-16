impl Solution {
    // Dutch National Flag algorithm
    //75. Sort Colors

    pub fn sort_colors(nums: &mut Vec<i32>) {
        if nums.is_empty() {
            return;
        }

        let mut start = 0;
        let mut end = nums.len() - 1;
        let mut mid = 0;

        while mid <= end {
            if nums[mid] == 0 {
                nums.swap(start,mid);
                start += 1;
                mid += 1;
            } else if nums[mid] == 1 {
                mid += 1;
            } else {
                nums.swap(mid,end);
                if end == 0 { break; } // Prevent underflow
                end -= 1;
            }
            println!("after change {:?}",nums);
        }
    }
}
