/*
 
Code
2516. Take K of Each Character From Left and Right

reverse sliding window , we have find the sliding window in middle which is the portion , that is extra.
*/

class Solution {
public:
    int takeCharacters(string s, int k) {
        unordered_map<char,int> map;
        int windows = 0, i=0,size=s.size(),length = s.size();

        for(i=0;i<length;i++)
        {
            map[s[i]]++;
        }

        if(map['a']<k || map['b']<k || map['c']<k)
            return -1;
        i=0;
        for(int j=0;j<length;j++)
        {
            windows++;
            map[s[j]]--;

            // moving the right handside to maintain the k count of a, b, c
            while(map[s[j]]<k)
            {
                windows--;
                map[s[i]]++;
                i++;
            }


            size=min(size,length-windows);
        }

        return size;
    }
};