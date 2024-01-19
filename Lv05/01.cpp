#include <string>
#include <vector>

using namespace std;

bool check[8] = { false, };
int depth = 0;

void dfs(int k, vector<vector<int>>& dungeons, int& answer) {
    for (int i = 0; i < dungeons.size(); ++i) {
        if (check[i])
            continue;

        if (k < dungeons[i][0])
            continue;

        ++depth;
        check[i] = true;
        dfs(k - dungeons[i][1], dungeons, answer);
        --depth;
        check[i] = false;
    }

    if (answer < depth)
        answer = depth;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    dfs(k, dungeons, answer);
    return answer;
}