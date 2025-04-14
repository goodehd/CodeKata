#include <string>
#include <vector>

using namespace std;

void dfs(int num, int index, vector<int>& numbers, int target, int& answer) {
    if (index == numbers.size()) {
        if (num == target)
            answer++;
    } else {
        dfs(num + numbers[index], index + 1, numbers, target, answer);
        dfs(num - numbers[index], index + 1, numbers, target, answer);
    }
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(0, 0, numbers, target, answer);
    return answer;
}