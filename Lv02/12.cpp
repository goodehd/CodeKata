#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int start = a > b ? b : a;
    int end = a > b ? a : b;
    for (long long i = start; i <= end; ++i)
        answer += i;
    return answer;
}