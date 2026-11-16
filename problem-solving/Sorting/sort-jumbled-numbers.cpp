class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> temp;
        vector<int> arr;
        int number = 0, res = 0,multiply = 0;
        for(int i=0;i<nums.size();i++)
        {
            pair<int,int> p;
            number = nums[i];
            res = 0;
            multiply = 1;

            if(number==0)
            {
                number = mapping[0];
                res=mapping[0];
            }
            else 
            {
                while(number>0)
                {
                    res += multiply*mapping[number%10];
                    number/=10;
                    multiply*=10;
                }
            }
            p.first = res;
            p.second = i;
            temp.push_back(p);
        }

        // for(int i=0;i<temp.size();i++)
        //     printf("%d %d %d\n",temp[i].first,temp[i].second, nums[temp[i].second]);

        // sort(temp.begin(), temp.end(),[](const pair<int, int>& a, const pair<int, int>& b){
        //     if(a.first==b.first)
        //         return a.second<b.second;
        //     return a.first < b.first;
        // });

        sort(temp.begin(),temp.end());

        // printf("*********\n");

        // for(int i=0;i<temp.size();i++)
        //     printf("%d %d %d\n",temp[i].first,temp[i].second, nums[temp[i].second]);

        for(int i=0;i<temp.size();i++)
            arr.push_back(nums[temp[i].second]);
        return arr;
    }
};