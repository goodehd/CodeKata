#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ')
            continue;

        bool isup = false;

        if (isupper(s[i]))
            isup = true;

        int c = s[i] + n;

        if (!isup)
            s[i] = islower(c) ? c : c - 26;
        else
            s[i] = isupper(c) ? c : c - 26;
    }
    return s;
}