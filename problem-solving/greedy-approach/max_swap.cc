class Solution {
public:
    // using greedy approach
    // missed 9947 case, iterate from reverse to pick max and min than from left
    int maximumSwap(int num) {
        string number = to_string(num);
        int swap_1=-1,swap_2=-1;
        int max_index  = -1;
        
        for(int i=number.size()-1;i>=0;i--)
        {

            if(max_index==-1 || number[i]>number[max_index])
            {
                max_index = i;
            }
            else if(number[i]<number[max_index])
            {
                swap_1 = i;
                swap_2 = max_index;
            }
        }

        if(swap_1 !=-1 && swap_2 !=-1)
        {
            // printf("%s \n",number.c_str());
            swap(number[swap_1],number[swap_2]);
            // printf("%s \n",number.c_str());
        }

        return stoi(number);
    }
};