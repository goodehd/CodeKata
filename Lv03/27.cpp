#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < index; ++j) {
            do {
                s[i]++;

                if (s[i] == 123)
                    s[i] -= 26;
            } while (skip.find(s[i]) != string::npos);
        }
    }
    return s;
}