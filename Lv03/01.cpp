#include <string>
#include <vector>

using namespace std;

bool Islower(char c) {
    return c >= 'a' && c <= 'z';
}

string solution(string s) {
    int index = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            index = 0;
            continue;
        }

        int dif = 'a' - 'A';
        if (index % 2 == 0 && Islower(s[i])) {
            s[i] -= dif;
        } else if (index % 2 == 1 && !Islower(s[i])) {
            s[i] += dif;
        }
        index++;
    }
    return s;
}