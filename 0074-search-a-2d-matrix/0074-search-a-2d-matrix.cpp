class Solution {
public:

    bool searchInRow(vector<vector<int>>& mat, int tar, int row){//O(logn)
        //BS on the founded row
        int n = mat[0].size();
        
        int st = 0, end = n-1;
        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(tar == mat[row][mid]){
                return true;
            } else if(tar >= mat[row][mid]){//right 
                st = mid + 1;
            } else { //left
                end = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int tar) { //O(logm)
        //BS on total Rows
        int m = mat.size(), n = mat[0].size();

        int startRow = 0, endRow = m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow) / 2;

            if(tar >= mat[midRow][0] && tar <= mat[midRow][n-1]){
                //found the row
                return searchInRow(mat, tar, midRow);
            } else if(tar >= mat[midRow][n-1]){// down
                startRow = midRow + 1;
            } else { //Up
                endRow = midRow -1;
            }
        }

        return false;
    }
};