#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    for (auto Iter = lost.begin(); Iter != lost.end();) {
        auto check = std::find(reserve.begin(), reserve.end(), *Iter);
        if (check != reserve.end()) {
            reserve.erase(check);
            lost.erase(Iter);
            continue;
        }

        Iter++;
    }

    answer = n - lost.size();
    std::sort(lost.begin(), lost.end());

    for (int i = 0; i < lost.size(); ++i) {
        auto check = std::find(reserve.begin(), reserve.end(), lost[i] - 1);
        if (check != reserve.end()) {
            answer++;
            reserve.erase(check);
            continue;
        }

        check = std::find(reserve.begin(), reserve.end(), lost[i] + 1);
        if (check != reserve.end()) {
            answer++;
            reserve.erase(check);
            continue;
        }
    }

    return answer;
}