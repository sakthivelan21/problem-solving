class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<pair<int,int>> s;
        int max_array = 0;

        pair<int,int> t;
        int ind  = 0;
        for(int i=0;i<heights.size();i++)
        {
            // try to hold min values in stack , by poping out larger values
            ind = i;
            while(!s.empty() && s.back().second>heights[i])
            {
                t = s.back();
                s.pop_back();
                max_array = max(max_array,(i-t.first)*t.second);
                ind = t.first;
            }
            s.push_back({ind,heights[i]});

        }

        while(!s.empty())
        {
            t = s.back();
            s.pop_back();
            max_array = max(max_array, (static_cast<int>(heights.size())-t.first)*t.second);
        }

        return max_array;
    }
};