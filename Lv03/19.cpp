#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    if (section.size() == 1)
        return 1;

    int answer = 0;
    int currentPos = 0, nextPos = 1;

    while (true) {
        if (nextPos >= section.size()) {
            answer++;
            break;
        }

        if (section[nextPos] - section[currentPos] < m)
            nextPos++;
        else {
            currentPos = nextPos;
            nextPos = currentPos + 1;
            answer++;
        }
    }
    return answer;
}