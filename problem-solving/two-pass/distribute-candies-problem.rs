use std::cmp::max;

impl Solution {
    pub fn candy(ratings: Vec<i32>) -> i32 {
        let n = ratings.len();
        let mut candies = vec![1; n];

        // Forward pass
        for i in 1..n {
            if ratings[i] > ratings[i - 1] {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Backward pass
        let mut i:usize = n-1;
        while i>0 {
            if ratings[i-1] > ratings[i] {
                candies[i-1] = max(candies[i]+1, candies[i - 1]);
            }
            i-=1;
        }

        candies.iter().sum()
    }
}