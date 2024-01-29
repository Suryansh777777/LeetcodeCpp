class Solution {
public:
    vector<int> getleftmax(vector<int> &height,int& n){
        vector<int> LeftMAX(n);
        LeftMAX[0] = height[0];
        for(int i = 1 ; i < n ; i++){
            LeftMAX[i] = max(LeftMAX[i-1],height[i]);
        }
        return LeftMAX;
    }

    vector<int> getrightmax(vector<int> &height,int& n){
        vector<int> RightMAX(n);
        RightMAX[n-1] = height[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            RightMAX[i] = max(RightMAX[i+1],height[i]);
        }
        return RightMAX;
    }



    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> LeftMAX = getleftmax(height,n);
        vector<int> RightMAX = getrightmax(height,n);
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            int h = min(LeftMAX[i],RightMAX[i])-height[i];
            sum +=h;
        }
        return sum;
   }
};