#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    double num = sqrt(n);
    if (num == (int)num)
        return pow(num + 1, 2);
    return -1;
}