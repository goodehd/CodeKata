#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int point = 0, end = progresses.size();

    while (true) {
        if (point >= end)
            break;

        for (int i = point; i < progresses.size(); ++i) {
            progresses[i] += speeds[i];
        }

        int complite = 0;
        while (true) {
            if (point >= end || progresses[point] < 100)
                break;

            complite++;
            point++;
        }

        if (complite)
            answer.push_back(complite);
    }
    return answer;
}