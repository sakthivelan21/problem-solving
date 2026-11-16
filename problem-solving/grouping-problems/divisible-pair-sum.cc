class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        bool status =false;
        int value=0;
        unordered_map<int,int> remainder_freq;

        for(int i=0;i<arr.size();i++)
        {
            value = (arr[i]%k + k) %k; // to handle negative numbers remainder 
            remainder_freq[value]++;

            arr[i] = value;
        }


        for(int i=0;i<arr.size();i++)
        {

            if(arr[i]==0)
            {
                if(remainder_freq[arr[i]]&1)// check if 0 odd freq
                {
                    goto end;
                }
            }
            else if(remainder_freq[arr[i]]!=remainder_freq[k-arr[i]])
            {
                goto end;
            }

        }

        status = true;
        end:
        return status;
    }
};