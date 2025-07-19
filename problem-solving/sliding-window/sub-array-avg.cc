class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int result = 0;
        int left = 0;
        int i=0;
        int count = 0,c=0,avg;

        for(i=0;i<k;i++) {
            result+=arr[i];
            // printf("res %d val %d c %d\n",result,arr[i],c);
            c++;
        }

        for(;i<arr.size();i++) {
            while(c>=k) {
                // printf("entered clearn\n");
                avg = result/k;
                if (avg>=threshold) {
                    count++;
                }
                result -=arr[left++];
                c--;
            }
            // printf("*res %d val %d c %d\n",result,arr[i],c);
            result += arr[i];
            c++;
        }
        if(c>=k) {
            // printf("entered clearn\n");
            avg = result/k;
            if (avg>=threshold) {
                count++;
            }
            result -=arr[left++];
            c--;
        }

        return count;
    }
};