#include <string>
#include <vector>
#include <cmath>

using namespace std;

string Ternary(int n) {
    string make_base = "";

    for (int i = n; i > 0; ) {
        make_base = to_string(i % 3) + make_base;
        i /= 3;
    }

    return make_base;
}


int solution(int n) {
    string T = Ternary(n);
    int answer = 0;
    for (int i = 0; i < T.size(); ++i) {
        answer += (T[i] - '0') * pow(3, i);
    }

    return answer;
}