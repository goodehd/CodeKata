#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    unordered_map<char, int> map;
    string answer = "RCJA";

    for (int i = 0; i < survey.size(); ++i) {
        switch (choices[i]) {
        case 1:
            map[survey[i][0]] += 3;
            break;
        case 2:
            map[survey[i][0]] += 2;
            break;
        case 3:
            map[survey[i][0]] += 1;
            break;
        case 5:
            map[survey[i][1]] += 1;
            break;
        case 6:
            map[survey[i][1]] += 2;
            break;
        case 7:
            map[survey[i][1]] += 3;
            break;
        }
    }

    if (map['R'] < map['T'])
        answer[0] = 'T';

    if (map['C'] < map['F'])
        answer[1] = 'F';

    if (map['J'] < map['M'])
        answer[2] = 'M';

    if (map['A'] < map['N'])
        answer[3] = 'N';

    return answer;
}