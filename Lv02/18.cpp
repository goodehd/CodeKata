#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    vector<int> vec(10);
    for (int i : numbers) {
        vec[i] = 1;
    }

    int answer = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (!vec[i])
            answer += i;
    }

    return answer;
}