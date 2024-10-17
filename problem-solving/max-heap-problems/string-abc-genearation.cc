//1405. Longest Happy String

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        string result = "";
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});


        while(pq.size()>1)
        {
            pair<int,char> a = pq.top();
            pq.pop();

            pair<int,char> b = pq.top();
            pq.pop();

            if(a.first>=2)
            {
                result+= a.second;
                result+= a.second;
                a.first-=2;
            }
            else
            {
                result+= a.second;
                a.first-=1;
            }

            if(a.first>0)
                pq.push(a);

            if(b.first>=2 && b.first>=a.first)// saving a b value once for future use 
            /*
            Try this test case a=0, b =2 , c=7
First round c = 7 result = cc ->c=5
b = 2 result = ccb ->b =1 (if you did not add the two.first>=one.first here, you will get ccbb and then next round you get ccbbcc and return
Second c = 5 result = ccbcc c=3
b =1 result = ccbccb b=0
Last Round c=3 result = ccbccbcc


            */
            {
                result+= b.second;
                result+= b.second;
                b.first-=2;
            }
            else
            {
                result+= b.second;
                b.first-=1;
            }
            if(b.first>0)
                pq.push(b);

            // printf("%s\n",result.c_str());
        }
        if(!pq.empty())
        {
            pair<int,char> a = pq.top();
            pq.pop();
            if(a.first>=2)
            {
                result+= a.second;
                result+= a.second;
            }
            else
            {
                result+= a.second;
            }
        }

        return result;
    }
};