#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> set;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            set.insert(numbers[i] + numbers[j]);
        }
    }

    for (auto iter = set.begin(); iter != set.end(); iter++) {
        answer.push_back(*iter);
    }

    return answer;
}