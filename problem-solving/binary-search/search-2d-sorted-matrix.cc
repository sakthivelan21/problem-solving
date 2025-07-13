class Solution {
public:
    // could have treated the entire two d array as single array and searched it
    bool binary_search(vector<int> &arr,int target) {
        int left = 0, right = arr.size()-1,mid = 0;

        while(left<=right) {
            mid = (left+right)/2;
            if(arr[mid]==target)
                return true;
            else if(target>arr[mid])
                left = mid+1;
            else 
                right = mid-1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
        int left = 0, right = arr.size()-1,mid = 0;
        int col = arr[0].size();

        while(left<=right) {
            mid = (left+right)/2;
            if(target>=arr[mid][0] && target<=arr[mid][col-1]) {
                return  binary_search(arr[mid],target);
            } 
            else if(target>arr[mid][col-1]) {
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        return false;
    }
};