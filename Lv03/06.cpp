#include <string>
#include <vector>

using namespace std;

string NUM[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int etoi(string s) {
    for (int i = 0; i < 10; ++i) {
        if (s.find(NUM[i]) == 0)
            return i;
    }
}

int solution(string s) {
    string answer;
    string sub = s;
    int index = 0;

    while (index < s.size()) {
        sub = s.substr(index);
        if (s[index] >= '0' && s[index] <= '9') {
            answer.push_back(s[index]);
            index++;
        } else {
            int num = etoi(sub);
            answer.push_back('0' + num);
            index += NUM[num].size();
        }
    }
    return stoi(answer);
}