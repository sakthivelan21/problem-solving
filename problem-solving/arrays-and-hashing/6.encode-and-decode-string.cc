class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for(string s :strs)
        {
            result+= to_string(s.size())+'#'+s;
        }
        printf("%s\n",result.c_str());
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int ind = 0,length = s.size();
        string temp = "";
        while(ind<length)
        {
            if(s[ind]=='#')
            {   
                int len = atoi(temp.c_str());
                temp="";
                // printf("%d \n",ind);
                ind++;
                for(int i=0;i<len;i++)
                {
                    temp+=s[ind++];
                }
                result.push_back(temp);
                temp="";
            }
            else 
            {
                temp+=s[ind];
                ind++;
            }

        }
        return result;
    }
};
