class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check Row Conditions
        for (int row = 0; row < 9; row++) {

            std::unordered_set<char> seen;

            for (int col = 0; col < 9; col++) {

                char currentChar = board[row][col];

                if (currentChar == '.')
                    continue;

                if (seen.count(currentChar))
                    return false;

                seen.insert(currentChar);
            }
        }

        // Check Column Conditions
        for (int col = 0; col < 9; col++) {

            std::unordered_set<char> seen;

            for (int row = 0; row < 9; row++) {

                char currentChar = board[row][col];

                if (currentChar == '.')
                    continue;

                if (seen.count(currentChar)) {
                    return false;
                }

                seen.insert(currentChar);
            }
        }

        // Check 3x3 Box Condition
        for (int rowBlock = 0; rowBlock < 9; rowBlock += 3) {

            for (int colBlock = 0; colBlock < 9; colBlock += 3) {

                std::unordered_set<char> seen;

                for (int rowIncrement = 0; rowIncrement < 3; rowIncrement++) {

                    for (int colIncrement = 0; colIncrement < 3; colIncrement++) {

                        char currentChar =
                            board[rowBlock + rowIncrement][colBlock + colIncrement];

                        if (currentChar == '.')
                            continue;

                        if (seen.count(currentChar))
                            return false;

                        seen.insert(currentChar);
                    }
                }
            }
        }

        return true;
    }        
};
