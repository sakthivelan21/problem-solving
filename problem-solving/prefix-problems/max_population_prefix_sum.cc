/*
prefix sum problem use cases 

Population Change Problems (like the problem shared).
Range Addition Problems (adding values to a subarray or interval).
Scheduling Problems (tracking activity over a period of time).
*/

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> array(102,0);
        // from 1950 to 2050 
        int max_population=INT_MIN,p=0,max_year_ind= INT_MIN;
        for(int i =0;i<logs.size();i++)
        {
            array[logs[i][0]-1950]++; // add for birth
            array[logs[i][1]-1950]--; // death with -1
        }

        for(int i=0;i<array.size();i++)
        {
            p+=array[i];

            if(p>max_population)
            {
                // printf("%d %d\n",p,max_year_ind+1950);
                max_population=p;
                max_year_ind = i;
            }
        }
        return 1950+max_year_ind;
    }
};
