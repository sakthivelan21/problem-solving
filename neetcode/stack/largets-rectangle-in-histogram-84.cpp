/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<pair<int,int>> st;

        int ind=0;
        int length = heights.size();
        int max_area=0;

        for(int i=0;i<length;i++)
        {
            ind = i;
            // pop values of heigh value in st than incoming lower value
            while(!st.empty() && st.back().second>heights[i])
            {
                pair<int,int> p = st.back();
                st.pop_back();
                // printf("poped : ind %d height %d , width (%d-%d) - %d\n",p.first,p.second,i,p.first,i-p.first);
                max_area = max(max_area,(i- p.first)*p.second);
                // push index of lower value to keep track of start with lower value index
                ind = p.first;
            }
            // printf("pushing: ind %d height %d\n",ind,heights[i]);
            st.push_back({ind,heights[i]});
        }

        while(!st.empty())
        {
            pair<int,int> p = st.back();
            st.pop_back();
            // printf("poped : ind %d height %d , width (%d-%d) - %d\n",p.first,p.second,length,p.first,length-p.first);
            max_area = max(max_area,(length- p.first)*p.second);
        }

        return max_area;
    }
};
