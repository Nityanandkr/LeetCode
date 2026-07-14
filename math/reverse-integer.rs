impl Solution {
    pub fn reverse(mut x: i32) -> i32 {
        let mut rev: i32 = 0;

        while x != 0 {
            let digit = x % 10;
            x /= 10;

            match rev.checked_mul(10).and_then(|v| v.checked_add(digit)) {
                Some(v) => rev = v,
                None => return 0,
            }
        }

        rev
    }
}