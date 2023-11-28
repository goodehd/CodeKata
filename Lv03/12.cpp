#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (a <= n) {
        int newCola = b * (n / a);
        n = (n % a) + newCola;
        answer += newCola;
    }
    return answer;
}