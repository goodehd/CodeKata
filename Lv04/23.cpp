#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (long long i = left; i <= right; ++i) {
        if (i == 0) {
            answer.push_back(1);
            continue;
        }

        long long value = i / n > i % n ? i / n : i % n;
        answer.push_back(value + 1);
    }
    return answer;
}