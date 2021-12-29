void solve(vector<vector<int>>& image, int sr, int sc, int newColor,int oldColor)
{
    if(sr<0||sc<0||sr>=image.size()||sc>=image[0].size()||image[sr][sc]!=oldColor||image[sr][sc]==newColor)
    return;
    image[sr][sc]=newColor;
    solve(image,sr+1,sc,newColor,oldColor);
    solve(image,sr-1,sc,newColor,oldColor);
    solve(image,sr,sc+1,newColor,oldColor);
    solve(image,sr,sc-1,newColor,oldColor);
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        solve(image,sr,sc,newColor,image[sr][sc]);
        
        return image;
    }
};
