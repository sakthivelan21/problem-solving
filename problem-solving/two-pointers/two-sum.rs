impl Solution {
    // two pointer 
    pub fn two_sum(numbers: Vec<i32>, target: i32) -> Vec<i32> {
        
        let mut left : usize = 0;
        let mut right : usize = numbers.len() -1;
        let mut sum : i32 = 0;

        while(left<right) {
            sum = numbers[left] + numbers[right];

            if sum == target {
                left +=1;
                right +=1;
                break;
            }

            if sum < target {
                left = left+1;
            } else {
                right = right -1;
            }

        }

        return vec![left as i32 ,right as i32];
    }
}