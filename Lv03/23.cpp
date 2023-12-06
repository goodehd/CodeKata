#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int vec[10] = { 0, };
    int result[10] = { 0, };

    for (int i = 0; i < X.size(); ++i) {
        int index = X[i] - '0';
        vec[index]++;
    }

    for (int i = 0; i < Y.size(); ++i) {
        int index = Y[i] - '0';
        if (vec[index]) {
            result[index]++;
            vec[index]--;
        }
    }

    for (int i = 9; i >= 0; --i) {
        for (int j = 0; j < result[i]; ++j) {
            answer.push_back('0' + i);
        }
    }

    if (answer.empty()) {
        answer = "-1";
    } else if (answer[0] == '0') {
        answer = "0";
    }

    return answer;
}