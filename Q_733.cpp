class Solution {
public:
    void flood(vector<vector<int>>& image, int sr, int sc, int newColor,int old){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size()||image[sr][sc] != old)
            return;
        image[sr][sc]=newColor;
        flood(image,sr+1,sc,newColor,old);
        flood(image,sr,sc+1,newColor,old);
        flood(image,sr-1,sc,newColor,old);
        flood(image,sr,sc-1,newColor,old);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size())
            return image;
        if (image[sr][sc] != newColor)
            flood(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};
