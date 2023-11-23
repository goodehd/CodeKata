#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int MaxWidth = 0, MaxHeight = 0;
    for (int i = 0; i < sizes.size(); ++i) {
        int max = sizes[i][0] > sizes[i][1] ? sizes[i][0] : sizes[i][1];
        int min = sizes[i][0] > sizes[i][1] ? sizes[i][1] : sizes[i][0];

        MaxWidth = MaxWidth < max ? max : MaxWidth;
        MaxHeight = MaxHeight < min ? min : MaxHeight;
    }
    return MaxWidth * MaxHeight;
}