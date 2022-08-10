class Solution {
private:
    // dfs calls plus changing the colors
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>& image,
    int newColor,int delRow[],int delCol[],int iniColor){
        ans[row][col] = newColor;
        // row size 
        int n = image.size();
        // column size
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if(nrow>=0) && nrow<n && ncol>=0 && ncol<m && 
            image[nrow][ncol] == inicolor && ans[nrow][ncol]{
                dfs(nrow,ncol,ans,image,newColor,delRow,delCol,iniColor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //we are storing the intial color
        int iniColor = image[sr][sc];
        // creating a vector name as ans
        vector<vector<int>>ans = image;
        // storing the row and col in which we have to travel 
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        // make dfs calls
        dfs(sc,sr,ans,image,newColor,delRow,delCol,iniColor);
        return ans;
    }
};