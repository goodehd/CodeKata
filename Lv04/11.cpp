#include <string>
#include <vector>
#include <limits.h>

using namespace std;

string solution(string s) {
    string answer = "";

    int Max = INT_MIN;
    int Min = INT_MAX;

    int curPos = 0;
    int pos = 0;
    while (pos != string::npos) {
        pos = s.find(' ', curPos);
        int len = pos - curPos;
        string numstr = s.substr(curPos, len);

        long long num = stoi(numstr);

        Max = Max < num ? num : Max;
        Min = Min > num ? num : Min;
        curPos = pos + 1;
    }

    answer += to_string(Min);
    answer += " ";
    answer += to_string(Max);

    return answer;
}