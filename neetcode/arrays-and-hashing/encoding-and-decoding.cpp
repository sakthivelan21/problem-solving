class Solution {
public:
    // trick is size+ # + string itself
    string encode(vector<string>& strs) {
        string result = "";

        for(string s : strs)
        {
            result += to_string(s.size()) + "#"+s ;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        string res ="";

        int i=0;
        int length=s.size();
        int str_length=0;

        while(i<length)
        {
            res="";
            str_length=0;

            for(;i<length && s[i]!='#';i++)
                res+=s[i];
            i++;
            printf("%s \n",res.c_str());
            str_length = stoi(res);
            res="";

            for(int j=0;i<length && j<str_length;i++,j++)
            {
                res+=s[i];
            }
            result.push_back(res);
        }

        return result;
    }
};
