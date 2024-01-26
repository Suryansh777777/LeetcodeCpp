class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        int n = matrix.size();

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == '.') continue;
                
                if(st1.find(matrix[i][j])!= st1.end()){
                    return false;
                }
                st1.insert(matrix[i][j]);  
            }
            st1.clear();
        }
        for(int j = 0 ; j < n ; j++){
            for(int i = 0 ; i < n ; i++){
                if(matrix[i][j] == '.') continue;
                if(st2.find(matrix[i][j])!= st2.end()){
                    return false;
                }
                st2.insert(matrix[i][j]);  
            }
         st2.clear();
        }
        
        return true;
    }
};