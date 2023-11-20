#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (const int num : arr) {
        if (num % divisor == 0)
            answer.push_back(num);
    }

    for (int i = 0; i < answer.size(); ++i) {
        for (int j = 1; j < answer.size() - i; ++j) {
            if (answer[j - 1] > answer[j]) {
                int temp = answer[j - 1];
                answer[j - 1] = answer[j];
                answer[j] = temp;
            }
        }
    }

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}