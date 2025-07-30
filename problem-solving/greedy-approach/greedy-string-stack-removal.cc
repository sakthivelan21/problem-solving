class Solution {
public:

    // using same str as a stack for removing ab and ba greedily 
    int remove_str(string &s,string &target) {
        int count = 0;

        int index = 0;

        for(int i=0;i<s.size();i++) {
            s[index++] = s[i];

            if(index>=2 && s[index-1]==target[1] && s[index-2]==target[0]) {
                index-=2;
                count++;
            }
            
        }
        s.resize(index);
        return count;
    }
    int maximumGain(string s, int x, int y) {
        int points = 0;
        string max="",min="";
        int max_points = 0,min_points=0;

        if(x>y) {
            max_points = x;
            max = "ab";
            min_points = y;
            min = "ba";
        } else {
            max_points = y;
            max = "ba";
            min_points = x;
            min = "ab";
        }
        points += remove_str(s,max) * max_points;
        points +=remove_str(s,min) * min_points;
        return points;
    }
};