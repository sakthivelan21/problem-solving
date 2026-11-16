class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);

        stack<int> s;

        for(int i=temperatures.size()-1;i>=0;i--)
        {
            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                s.pop();
            }

            if(!s.empty() && temperatures[s.top()]>=temperatures[i])
            {
                result[i] = s.top()-i;
            }

            s.push(i);
        }

        return result;
    }
};

/*


*/