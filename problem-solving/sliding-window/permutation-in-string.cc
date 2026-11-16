class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> map1,map2;

        for(int i=0;i<s1.size();i++)
        {
            map1[s1[i]]++;
        }

        int left = 0,f=0;

        for(int j=0;j<s2.size();j++) {
            map2[s2[j]]++;
            while((j-left)>=s1.size()) {
                map2[s2[left]]--;
                if(map2[s2[left]]<=0){
                    map2.erase(s2[left]);
                }
                left++;
            }
            // printf("start %d end %d\n",j,left);

            if((j-left+1)==s1.size()) {
                // for(int i=left;i<=j;i++){
                //     printf("%c",s2[i]);
                // }
                // printf("\n");
                f=0;
                for(auto it=map1.begin();it!=map1.end();it++) {
                    if(map2.find(it->first)==map2.end())
                    {
                        f=1;
                        break;
                    }
                    if(map2[it->first]!=map1[it->first])
                    {
                        f=1;
                        break;
                    }
                }
                if(!f)
                    return true;
            }

        }

        return false;

    }
};