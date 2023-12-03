#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), greater<int>());

    for (int i = 0; i < score.size(); i += m) {
        if (score.size() - i < m)
            break;

        int price = score[i + m - 1] > k ? k : score[i + m - 1];
        answer += price * m;
    }

    return answer;
}