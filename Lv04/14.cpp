#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num1 = 0;
    int num2 = 1;
    for (int i = 2; i < n + 1; ++i) {
        int num3 = (num1 + num2) % 1234567;
        num1 = num2;
        num2 = num3;
    }

    return num2;
}