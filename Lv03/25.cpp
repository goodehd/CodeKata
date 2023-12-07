#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    string x;
    x.push_back(s[0]);
    int countX = 1;
    int countN = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == x[0])
            ++countX;
        else
            ++countN;

        if (countX == countN) {
            ++answer;
            countX = 0;
            countN = 0;
            x.clear();
            if (i + 1 < s.size())
                x.push_back(s[i + 1]);
        }
    }

    if (!x.empty())
        answer++;

    return answer;
}