/*
#### Binary Search - Search a 2D Matrix

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/

class Solution {
public:

    pair<int,int> commute_point(int mid,int row,int col,int length)
    {
        pair<int,int> p;


        p.first = mid/col;

        p.second =  mid %col ;

        return p;
    }

/*

length = 12

row = 3 

col = 4

index = 10, row = 3

length = 1

row - 1,
col - 1

index = 0,

*/

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        bool result = false;

        int row = matrix.size();
        int col = matrix[0].size();

        int length = row*col;

        int left = 0;
        int right = length-1;
        int mid ,number;


        while(left<=right)
        {
            mid = left + (right-left)/2;

            pair<int,int> p = commute_point(mid,row,col,length);

            // printf("mid %d p row %d col %d\n",mid,p.first,p.second);

            number = matrix[p.first][p.second];

            if(target==number)
            {
                result =true;
                break;
            }
            else if(number>target)
            {
                right=mid-1;
            }
            else {
                left = mid+1;
            }
        }

        return result;
    }
};