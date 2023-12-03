#include <string>
#include <vector>

using namespace std;

const vector<int> answerOne = { 1, 2, 3, 4, 5 };
const vector<int> answerTwo = { 2, 1, 2, 3, 2, 4, 2, 5 };
const vector<int> answerThree = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[3] = { 0, };
    int max = 0;

    for (int i = 0; i < answers.size(); ++i) {
        if (answerOne[i % answerOne.size()] == answers[i])
            score[0]++;

        if (answerTwo[i % answerTwo.size()] == answers[i])
            score[1]++;

        if (answerThree[i % answerThree.size()] == answers[i])
            score[2]++;

        max = max < score[0] ? score[0] : max;
        max = max < score[1] ? score[1] : max;
        max = max < score[2] ? score[2] : max;
    }

    for (int i = 0; i < 3; ++i) {
        if (max == score[i])
            answer.push_back(i + 1);
    }

    return answer;
}