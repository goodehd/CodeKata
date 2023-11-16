int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
vector<vector<bool>> visited;

class Solution {
public:
    void Recursive(vector<vector<int>>& image, int sr, int sc, int color, int num) {
        if (sr >= image.size() || sr < 0)
            return;

        if (sc >= image[sr].size() || sc < 0)
            return;

        if (image[sr][sc] != num || visited[sr][sc])
            return;

        image[sr][sc] = color;
        visited[sr][sc] = true;
        for (int i = 0; i < 4; ++i) {
            Recursive(image, sr + dx[i], sc + dy[i], color, num);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        visited.clear();
        visited.resize(image.size());
        for (int i = 0; i < image.size(); ++i) {
            visited[i].resize(image[i].size());
        }

        Recursive(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};