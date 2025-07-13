class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        //sort the events so we attend them day wise 
        sort(events.begin(),events.end());

        int result = 0;
        int day = 0;
        int index = 0;

        priority_queue<int,vector<int>,greater<int>> min_heap;


        while(!min_heap.empty() || index<events.size()){
            // init day on min_heap empty()
            if(min_heap.empty())
                day = events[index][0];
            
            // Add all the events less then or equal to current day 
            while(index<events.size() && events[index][0]<=day) {
                min_heap.push(events[index][1]);
                index++;
            }

            // attend current day event first
            result++;
            day++;
            min_heap.pop();

            // drop all expired events less than d
            while(!min_heap.empty() && min_heap.top()<day) {
                min_heap.pop();
            }
        }

        return result;
    }
};