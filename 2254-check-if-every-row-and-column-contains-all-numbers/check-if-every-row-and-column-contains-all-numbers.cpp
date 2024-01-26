class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<string> str;
        int n = matrix.size();
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == '.') continue;

                string row = string(1 ,matrix[i][j]) + "ROW" + to_string(i);
                string col = string(1 ,matrix[i][j]) + "COL" + to_string(j);

                if(str.find(row)!= str.end() || str.find(col)!= str.end()){
                    return false;
                }
                str.insert(row);
                str.insert(col);
            }
        }
        return true;
    }
};