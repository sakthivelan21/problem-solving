class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = prices[0] ;
        int result = 0;
        int diff =0;

        for(int i=1;i<prices.size();i++) {
            diff = prices[i]-left;
            if (diff>=0) {
                result = max(result,diff);
            } else {
                left = prices[i];
            }
        }

        return result;
    }
};