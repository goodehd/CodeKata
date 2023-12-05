#include <string>
#include <vector>

using namespace std;

string s[] = { "aya", "ye", "woo", "ma" };

bool CheckTry(string babb) {
    int prevS = -1;
    while (0 < babb.size()) {
        bool find = false;
        for (int i = 0; i < 4; ++i) {
            if (babb.find(s[i]) == 0 && prevS != i) {
                find = true;
                prevS = i;
                babb = babb.substr(s[i].size());
                break;
            }
        }
        if (!find)
            return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); ++i) {
        if (CheckTry(babbling[i]))
            answer++;
    }
    return answer;
}