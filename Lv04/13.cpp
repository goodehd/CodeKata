#include <string>
#include <vector>

using namespace std;

void toBinary(int a, string& s) {
    if (a / 2 != 0)
        toBinary(a / 2, s);
    s += to_string(a % 2);
}

vector<int> solution(string s) {
    vector<int> answer = { 0, 0 };

    while (s != "1") {
        string s1;
        int zero = 0;
        for (char c : s) {
            if (c == '0') {
                zero++;
                continue;
            }
            s1 += c;
        }
        s.clear();
        toBinary(s1.size(), s);
        answer[0]++;
        answer[1] += zero;
    }

    return answer;
}