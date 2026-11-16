impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let arr: Vec<char> = s.chars().collect();
        let mut left: usize = 0;
        let mut right: usize = arr.len().saturating_sub(1); // safe even if arr is empty

        while left < right {
            while left < right && !arr[left].is_alphanumeric() {
                left += 1;
            }

            while left < right && !arr[right].is_alphanumeric() {
                right = right.saturating_sub(1); // safe subtraction
            }

            if arr[left].to_ascii_lowercase() != arr[right].to_ascii_lowercase() {
                return false;
            }

            left += 1;
            right = right.saturating_sub(1);
        }

        true
    }
}
