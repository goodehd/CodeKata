#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long input = num;
    while (input > 1) {
        if (input % 2 == 0)
            input /= 2;
        else
            input = input * 3 + 1;

        answer++;

        if (answer == 500)
            break;
    }
    return answer == 500 ? -1 : answer;
}