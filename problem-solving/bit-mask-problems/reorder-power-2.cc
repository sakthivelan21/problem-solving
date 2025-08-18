class Solution {
public:
    bool reorderedPowerOf2(int N) {
        long c = counter(N);
        for (int i = 0; i < 32; i++)
            if (counter(1 << i) == c) return true;
        return false;
    }
 //If two numbers have exactly the same digits in the same quantities, their counter value will be the same.


    long counter(int N) {
        long res = 0;
        for (; N; N /= 10) res += pow(10, N % 10);
        return res;
    }
};