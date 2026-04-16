class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size(), col = image[0].size();
        for(int i=0;i<rows;i++)
        {
            reverse(image[i].begin(),image[i].end());
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                image[i][j] = 1-image[i][j];
            }
        }
        return image;
    }
};