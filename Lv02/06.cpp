#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (long long i = 0; i < n; ++i) {
        answer.push_back(x * (i + 1));
    }
    return answer;
}