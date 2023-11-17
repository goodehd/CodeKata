#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int input = x;
    int hi = 0;
    while (input > 0) {
        hi += input % 10;
        input /= 10;
    }
    return x % hi == 0;
}