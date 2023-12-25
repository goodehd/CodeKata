#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int num1 = 1;
    int num2 = 2;
    for (int i = 3; i < n + 1; ++i) {
        int num3 = (num1 + num2) % 1234567;
        num1 = num2;
        num2 = num3;
    }

    return num2;
}