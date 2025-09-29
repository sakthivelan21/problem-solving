class Solution {
public:

    // eucledian algorithm
    int gcd(int a,int b) {
        int t = 0;
        while(b!=0) {
            t = (a%b);
            a = b;
            b = t;
        }
        return a;
    }


    // lcm(a,b) * gcd(a,b) = a*b
    // lcm(a,b) = a*b / gcd(a,b)
    int lcm (int a,int b) {
        return (a*b) / gcd(a,b);
    }

    int lcm_with_gcd(int a, int b,int gcd) {
        return a*(b/gcd);
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {

        // printf("The GCD is %d, LCM is %d, Product %d",gcd(6,4),lcm(6,4),6*4);
        vector<int> result;

        for(int i=0;i<nums.size();i++) {

            // idea is to store the value in  right itself 
            // use stack to pop back all values and recompute the values;
            int right = nums[i];
            while(true) {
                int left = (result.empty()) ? 1: result.back();

                int gcd_val = gcd(left,right);

                if(gcd_val>1) {
                    result.pop_back();
                    right = lcm_with_gcd(left,right,gcd_val);
                }
                else 
                    break;
            }

            result.push_back(right);
        }

        return result;
    }

    
};