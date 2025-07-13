class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int size = endTime.size();
        vector<int> gaps(size+1);

        // computing the gaps vector of all the event
        gaps[0] = startTime[0];// start node time gap
        gaps[size] = eventTime-endTime[size-1]; // adding last node time gap

        for(int i=1;i<size;i++) {
            gaps[i] = startTime[i] - endTime[i-1];
        }

        int result = 0,window = 0;
        // grouping and taking the first k gap values
        for(int i=0;i<=k;i++) {
            result+= gaps[i];
        }
        window=result;
        for(int i=k+1;i<=size;i++){
        // adjusting by adding the gap , while dropping the old gap 
        // while maintaing sliding window
            window += gaps[i] - gaps[i-(k+1)];
            result = max(result,window);
        }
        return result;
    }
};

/*
Example
Suppose:

eventTime = 24
startTime = [2, 8, 15]
endTime = [5, 10, 18]
k = 1
Gaps:

gaps[0] = 2 (from 0 to 2)
gaps[1] = 8 - 5 = 3 (between first and second event)
gaps[2] = 15 - 10 = 5 (between second and third event)
gaps[3] = 24 - 18 = 6 (after last event)
So, gaps = [2, 3, 5, 6]

Find the max sum of any 2 consecutive gaps (k+1 = 2):

2+3=5
3+5=8
5+6=11
Result: 11 (from gaps[2] and gaps[3])
*/