#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

int lcm(int a, int b, int gcd) {
    return a * b / gcd;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m, answer[0]));
    return answer;
}