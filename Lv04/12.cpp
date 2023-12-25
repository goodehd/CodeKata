#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool IsUpper = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            IsUpper = true;
            continue;
        }

        if (IsUpper && isalpha(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
        IsUpper = false;
    }

    return s;
}