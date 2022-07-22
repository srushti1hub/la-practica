class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j, int color,int source){
        if(i>=image.size() || j>=image[0].size() || i<0 || j<0 || image[i][j] != source)
            return;
        image[i][j] = color;
        dfs(image,i-1,j,color,source);
        dfs(image,i+1,j,color,source);
        dfs(image,i,j-1,color,source);
        dfs(image,i,j+1,color,source);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        int source = image[sr][sc];
        dfs(image,sr,sc,color,source);
        return image;
    }
};
