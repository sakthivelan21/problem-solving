#include <stdio.h>
/*
    Bitwise operators demo
    
    *** output *** 
    The Bitwise AND operation of 6 & 4 is 4
    The Bitwise OR operation of 6 | 4 is 6
    The Bitwise Exclusive OR operation of 6 ^ 4 is 2
    The Bitwise complement opertion of ~ 6 is -7
    The one Time Left Shift operation of 6 << 1 is 12
    The one Time Left Shift operation of 6 << 1 is 3
*/
int main()
{   
    int a=6,b=4;
    // the binary form of a and b is 0110 and 0100
    
    //Bitwise And(&) operator - if both the corresponding bits are 1 it will 1 else 0
    // 0110 & 0100 = 0100 (4)
    printf("\n The Bitwise AND operation of %d & %d is %d",a,b,a&b);
    
    //Bitwise OR(|) operator - if any one of the corresponding bits are 1 it will 1 else 0
    // 0110 | 0100 = 0110 (6)
    printf("\n The Bitwise OR operation of %d | %d is %d",a,b,a|b);
    
    //Bitwise Exclusive OR (^) operator - if both of the corresponding bits are not same it will 1 else 0
    // 0110 ^ 0100 = 0010 (2)
    printf("\n The Bitwise Exclusive OR operation of %d ^ %d is %d",a,b,a^b);
    
    // Bitwise complement(~) opertor - it will give the complement of corresponding bit if 1 it will return 0 and vice-versa
    // ~ 0110 = 1001 (9) expected output
    // compiler will return the two's complement of the value (-7)
    /*
        The Bitwise complement ~6 (0110) is 9 (1001) but answer is -7 why ??
        
            For any integer n, the bitwise complement of n will be -(n+1).
        
            * When numbers are printed in base-10, the result of a NOT operation can be surprising. 
            * In particular, positive numbers can become negative and vice versa.
            * The negative numbers are stored as the two’s complement of the positive counterpart.
            * For any integer n, the bitwise complement of n will be -(n+1).
            * Bitwise complement of N = ~N (represented in 2’s complement form).
            * 2’complement of ~N= -(~(~N)+1) = -(N+1).
    */
    printf("\n The Bitwise complement opertion of ~ %d is %d",a,~a);
    
    //Bitwise Left-Shift(<<) operator - it will remove the 'n' left most corresponding bit and add 'n' 0 at the right side
    // 0110 << 1 = 1100 (12)
    printf("\n The one Time Left Shift operation of %d << 1 is %d",a,a<<1);
    
    //Bitwise Right-Shift(>>) operator - it will remove the 'n' right most corresponding bit and add 'n' 0 at the left side
    // 0110 >> 1 = 0011 (3)
    printf("\n The one Time Left Shift operation of %d << 1 is %d",a,a>>1);
    
    
    return 0;
}
