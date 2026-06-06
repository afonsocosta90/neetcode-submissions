class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Implement 2D Binary Search
        
        int topRow = 0;
        int bottomRow = static_cast<int>(matrix.size()) - 1;
        int midRow;
        bool rowFlag = false;

        while (topRow <= bottomRow) {
            midRow = topRow + (bottomRow - topRow) / 2;
            
            if (matrix[midRow].back() < target) {
                topRow = midRow + 1;
            } else if (matrix[midRow].front() > target) {
                bottomRow = midRow - 1;
            } else {
                rowFlag = true; break;
            }
        }

        if (!rowFlag) return false;

        int left = 0;
        int right = static_cast<int>(matrix[midRow].size()) - 1;
        int midpoint;

        while (left <= right) {
            midpoint = left + (right - left) / 2;
            if (matrix[midRow][midpoint] == target) return true;
            if (matrix[midRow][midpoint] < target) {
                left = midpoint + 1;
            } else {
                right = midpoint - 1; 
            }
        }
        return false;
    }
};
