#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> keyInfo;

    for (int i = 0; i < keymap.size(); ++i) {
        for (int j = 0; j < keymap[i].size(); ++j) {
            auto iter = keyInfo.find(keymap[i][j]);
            if (iter == keyInfo.end()) {
                keyInfo.insert(make_pair(keymap[i][j], j + 1));
            } else {
                iter->second = iter->second > j + 1 ? j + 1 : iter->second;
            }
        }
    }

    for (int i = 0; i < targets.size(); ++i) {
        int count = 0;
        for (int j = 0; j < targets[i].size(); ++j) {
            auto iter = keyInfo.find(targets[i][j]);
            if (iter == keyInfo.end()) {
                count = -1;
                break;
            } else {
                count += iter->second;
            }
        }
        answer.push_back(count);
    }

    return answer;
}