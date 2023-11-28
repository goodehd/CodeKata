#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> map;

    for (int i = 0; i < s.size(); ++i) {
        auto iter = map.find(s[i]);
        if (iter == map.end()) {
            answer.push_back(-1);
            map.insert(make_pair(s[i], i));
        } else {
            answer.push_back(i - iter->second);
            iter->second = i;
        }
    }

    return answer;
}