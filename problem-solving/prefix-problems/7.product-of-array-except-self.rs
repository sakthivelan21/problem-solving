impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let mut prefix :Vec<i32>= vec![1;nums.len()];
        let mut suffix:Vec<i32> = vec![1;nums.len()];
        let mut end = nums.len()-1;
        let mut pref =1 ;
        let mut suff = 1;

        for i in (0..nums.len()){
            prefix[i] = pref;
            pref*=nums[i];
            suffix[end]=suff;
            suff *= nums[end];
            end-=1;
        }
        // println!("prefix array is {:?}",prefix);

        // println!("suffix array is {:?}",suffix);

        for i in (0..nums.len()){
            prefix[i]*=suffix[i];
        }


        return prefix;
    }
}