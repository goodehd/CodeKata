#include <string>
#include <vector>
#include <stack>

using namespace std;

bool IsCurrectBracket(string s) {
    stack<char> stk;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
            continue;
        }

        if (c == ')' && !stk.empty() && stk.top() == '(') {
            stk.pop();
            continue;
        }

        if (c == ']' && !stk.empty() && stk.top() == '[') {
            stk.pop();
            continue;
        }

        if (c == '}' && !stk.empty() && stk.top() == '{') {
            stk.pop();
            continue;
        }

        return false;
    }

    return stk.empty();
}

int solution(string s) {
    int answer = 0;
    int size = s.size();
    for (int i = 0; i < size; ++i) {
        string news = s.substr(i);
        if (IsCurrectBracket(news))
            answer++;
        s.push_back(s[i]);
    }
    return answer;
}