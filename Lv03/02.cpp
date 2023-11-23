#include <string>
#include <vector>

using namespace std;

void Three(int cout, int sum, int index, vector<int> number, int& answer) {
    if (cout == 3) {
        if (sum == 0)
            answer++;
        return;
    }

    for (int i = index; i < number.size(); ++i) {
        Three(cout + 1, sum + number[i], i + 1, number, answer);
    }
}

int solution(vector<int> number) {
    int answer = 0;
    Three(0, 0, 0, number, answer);
    return answer;
}