#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    multiset<int, greater<int>> rank;

    for (int i : score) {
        rank.insert(i);

        if (rank.size() <= k) {
            answer.push_back(*(--rank.end()));
        } else {
            answer.push_back(*next(rank.begin(), k - 1));
        }
    }

    return answer;
}