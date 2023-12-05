#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> result(number + 1, 1);

    for (int i = 2; i <= number; i++)
    {
        for (int j = 0; j <= number; j += i)
        {
            result[j]++;
        }
    }

    for (int i = 1; i <= number; i++)
    {
        if (result[i] <= limit)
            answer += result[i];
        else
            answer += power;
    }

    return answer;
}