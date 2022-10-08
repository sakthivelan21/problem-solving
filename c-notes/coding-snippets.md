# Coding Snippets in C

+ how many times zoho will print?

    ```
        int main(){
        int i=1024;
        for( ; i; i>>=1)
        printf(“ zoho ”);
        return 0;
        }
    ```
    Ans : 11

    Explaination :

    * Right shift(>>) will remove the last bit and replace with 0 at front .Eg: 4(100)>>1 = 2(010)

    * right shift will also reduce the value to half of original value 

    * here 1024>>1 = 512>>1 = 256>>1 .... =2>>1 = 1>>1 (0)

    * untill zero is reached in i it will run, so loop run 11 times 

+ what is the output ?

    ```
    int main(){
        int n;
        for(n=9;n!=0;n--)
            printf(“n = %d”,n--);
        return 0;
    }
    ```

    Ans : infinite loop 

    Explaination : as the n value reduced 2 times for a single run and n value is odd, so it will go beyond 0

+ what will be the output of this snippet

    ```
    int main(){
        int c=5,no=10;
        do{
        no/=c;
        }while(c--);
        printf(“%d\\n”,no);
        return 0;
        }

    ```

    Ans: nothing will print 

    Explaination: 
    
    * as there is no runtime exception throwing system, c compiler will stop the execution and come out of the program 

    * at last c value will be zero and zero division error will come and compiler will jump out of the execution 

+ what will be the output ?

    ```
        #include <stdio.h>

        int main(){
            int i = 3;
            
            while(i--)
            {
                int i=100;
                i--;
                printf("%d ",i);
            }
            return 0;
        }
    ```

    Ans : 99 99  99

    Explaination:

    * Local scope variable will not disturb the other variable of same name;

+ what will be the output ?

    ```
    int main(){
        char s1[5]="1234",*p;
        p=s1+2;
        *p='0';
        printf("%s",s1);
    }

    ```

    Ans : 1204 

    Explaination:

    * pointer p will get the address position of s1+2 (3rd index) of s1 so modified to 1204

+ assume char take 1 byte and output?

    ```
    void main(){
        char str[10]="zoho";
        printf("%d",sizeof(str));
    }
    ```

    Ans : 10 

    Explaination:
    * as str is allocated with 10 

+ what is the output ?

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        char p[20];
        char* s= "string";
        int length = strlen(s);
        for(int i=0;i<length;i++)
            p[i]=s[length-i];
        printf("%s",p);
    }
    ```

    Ans : nothing will be printed

    Explaination:

    * as length - 0 will target towards '\0' end of string in s 

+ what will be the output ?

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        char str[2][3][3] = {'z','o','h','i','p','r','e','p'};
        printf("%s",**str);
    }
    ```

    Ans : zohiprep

+ what will be the output ?

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        char arr[] = "zoho";
        int size = sizeof(arr);
        printf("%d",size);
    }
    ```

    Ans : 5 

    Explaination:

    * consider the \0 will be included 

+ base address start at 2000 then what will be the output ??

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        int arr[5];
        arr++;
        printf("%u",arr);
    }
    ```
    Ans: Error 

    Explaination:

    * arr++ will be not allowed 

+ what will be the output 

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        int arr[]={1,2,3,4,5};
    int *ptr=(int*)(&arr+1);
    printf("%d",*(ptr-1));
    return 0;

    }
    ```

    Ans : 5 

    Explaination:

    * may be &arr + 1 (\0) points to the end of the array 

    * & arr points to 1 

+ what is the output :

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
        int arr[5]={1};
        
        for(int i=0;i<5;i++)
            printf("%d ",arr[i]);

    }
    ```

    Ans: 1 0 0 0 0 

+ what is the output : 

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
    char c[]="zoho2020";
    
    char*p = c;
    printf("%s",p+p[3]-p[1]);

    }
    ```

    Ans: zoho2020 

    Explaination:

    * p points to c 

    * p+1 will be oho2020 

    * by order of precedence , at first p + 'o'-'o' becomes p+0 - so it will point to whole array 

+ what will be the output

    ```
    #include <stdio.h>
    #include <string.h>
    #define sqrt(x) x*x
    int main(){
    printf("%d",sqrt(2+1));

    }
    ```

    Answer : 5 

    Explaination : 
    
    * at first sqrt function will be executed

    * so it will be 2+1*2+1 after that it will be computed as 5 

+ what will be the output 

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
    int i;
    if(i=printf("zoho"))
        printf("%d",i);
    }
    ```

    Answer : zoho4 

    Explaination:

    * printf will return back the size of the string so i value is 4 

    * as i value >0 if condition is executed 

+ what is the output 

    ```
    #include <stdio.h>
    #include <string.h>
    int main(){
    int i=2;
    printf("%d %d",i,i++);
    }
    ```

    Answer: 3 2

+ what is the output 

    ```
    #include <stdio.h>
    void fun(int *p){
    int q=10;
    p=&q;
    }
    int main(){
    int r=20;
    int *p=&r;
    fun(p);
    printf("%d",*p);
    return 0;
    }
    ```

    Ans : 20 

+ what is the output 

    ```
    #include<stdio.h>
    #define R 10
    #define C 20
    int main(){
    int (*p)[R][C];
    printf("%d",sizeof(*p));
    return 0;
    }
    ```

    Ans : 800

+ what is the output 

    ```
    #include<stdio.h>

    int main(){
    int arr[]={1};
    int i;
    for(i=0;i<5;i++);
    {
    printf("%d",i);
    }
    return 0;

    }
    ```

    Ans : 5 

    Explaination : because of semicolon

+ what is the output 

    ```
    #include<stdio.h>

    int main(){
    int i=0;
    int arr[]={1,2,3,4,5};
    printf("%d%d%d",i[arr],i++,arr[i++]);
    return 0;

    }
    ```

    Ans: 311

    printf("%d%d%d",2[arr],1,arr[0]);