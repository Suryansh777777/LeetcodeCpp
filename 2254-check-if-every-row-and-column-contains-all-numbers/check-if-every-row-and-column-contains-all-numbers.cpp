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
                else{st1.insert(matrix[i][j]);  }
                if(st2.find(matrix[j][i])!= st2.end()){
                    return false;
                }
                else{st2.insert(matrix[j][i]);  }
            }
        st1.clear();
        st2.clear();
        }
        return true;
    }
};