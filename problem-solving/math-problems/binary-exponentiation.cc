class Solution {
    public:
        long long int mod = 1e9 + 7;
    
        long long power(long long num , long long count)
        {
            long long result = 1;
    
    
            // for iteration is slow in generating numbers 
            // for(long long i=0;i<count;i++)
            // {
            //     result = (result* num) % mod;
            // }
            long long multi = num;
    
            // fast exponentiation
            while(count>0)
            {
                if(count&1)
                {
                    result = (result*multi)%mod;
                }
    
                multi = (multi*multi)%mod;
    
                count/=2;
            }
    
            return result%mod;
        }
    
        int countGoodNumbers(long long n) {
           long long int result = 1;
    
    
            long long count_even = n/2;
    
            long long count_odd = n - count_even;
    
    
    
            return (power(4,count_even) * power(5,count_odd))%mod;
        }
    };
    
    /*
    num = 3, count = 5
    
    3^5 = 3^(2^0) * 3^(2^2)
        = 3^1 * 3^4
        = 3 * 81 = 243
    
    
    */
    