class Solution {
public:

    string get_res(string &s)
    {
        string res="";

        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
                res+=tolower(s[i]);
        }

        return res;
    }

    bool isPalindrome(string s) {
        string res = get_res(s);

        int first = 0,last = res.size()-1;

        while(first<last)
        {
            if(res[first]!=res[last])
                return false;
            first++;
            last--;
        }

        return true;
    }
};