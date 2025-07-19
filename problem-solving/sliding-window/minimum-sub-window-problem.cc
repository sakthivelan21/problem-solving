class Solution {
public:
    bool compare(unordered_map<char,int> &map1,unordered_map<char,int> &map2){
        for(auto it= map1.begin();it!=map1.end();it++){
            if(map2.find(it->first)==map2.end())
                return false;
            if(map2[it->first]<map1[it->first])
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;


        for(int i=0;i<t.size();i++) {
            map1[t[i]]++;
        }
        int left =0;
        vector<int> array = {0,0,0};
        int length =0;
        for(int i=0;i<s.size();i++) {
            map2[s[i]]++;
            while(i>=map1.size()-1 && compare(map1,map2)) {
                // printf("map matched left %d i %d \n",left,i);
                length = i-left+1;
                if(array[0]==0 || length<array[0]) {
                    array[0]= length;
                    array[1]=left;
                    array[2]=i;
                }
               
                map2[s[left]]--;
                if(map2[s[left]]<=0) 
                    map2.erase(s[left]);
                left++;
            }
        }
        // printf("%d %d %d",array[0],array[1],array[2]);
        string result="";
        if(array[0]) {
            for(int i=array[1];i<=array[2];i++)
                result.push_back(s[i]);
        }
        return result;
    }
};