#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string num = to_string(n);
    sort(num.begin(), num.end(), greater<int>());
    long long answer = stoll(num);
    return answer;
}