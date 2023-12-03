#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < goal.size(); ++i) {
        if (cards1[index1] == goal[i]) {
            index1++;
            continue;
        }

        if (cards2[index2] == goal[i]) {
            index2++;
            continue;
        }

        answer = "No";
        break;
    }

    return answer;
}