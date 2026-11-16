//2938. Separate Black and White Balls

class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int white_index=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                count+= i-white_index;
                white_index++;
            }
        }

        return count;
    }
};