class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int size = endTime.size();
        vector<int>  gaps(size+1);

        gaps[0] = startTime[0];

        gaps[size] = eventTime-endTime[size-1];

        for(int i=1;i<size;i++)
            gaps[i] = startTime[i] - endTime[i-1];

        

        // compute largest right for suffix value 
        vector<int> largestRight(size + 1, 0);
        for (int i = size - 1; i >= 0; --i)
            largestRight[i] = max(largestRight[i + 1], gaps[i + 1]);
        
        int maxFree = 0, largestLeft = 0;
        for (int i = 1; i <= size; ++i) {
            int duration = endTime[i - 1] - startTime[i - 1];
            bool canFitLeft = largestLeft >= duration;
            bool canFitRight = largestRight[i] >= duration;

            if (canFitLeft || canFitRight) {
                int merged = gaps[i - 1] + gaps[i] + duration;
                maxFree = max(maxFree, merged);
            }

            maxFree = max(maxFree, gaps[i - 1] + gaps[i]);
            largestLeft = max(largestLeft, gaps[i - 1]);
        }

        return maxFree;

    }
};