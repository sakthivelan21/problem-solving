class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_size = 0;

        for(int i=0;i<piles.size();i++)
        {
            max_size = max(piles[i],max_size);
        }
        
        int left = 1, right = max_size,mid =0;

        long long int time = 0;

        int min_size = max_size;

        while(left<=right){
            mid = (left+right)/2;

            time=0;
            for(int i=0;i<piles.size();i++){
                time+= ceil(static_cast<double>(piles[i])/mid);
            }

            if(time<=h) {
                min_size = min(mid,min_size);
                right=mid-1;
            } else {
                left = mid+1;
            }
        }

        return min_size;
    }
};