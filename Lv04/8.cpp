#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> result = players;

    unordered_map<std::string, int> map;
    size_t size = players.size();
    for (size_t i = 0; i < size; ++i) {
        map.insert(make_pair(players[i], i));
    }

    size = callings.size();
    for (size_t i = 0; i < size; ++i) {
        auto Iter = map.find(callings[i]);
        auto Iter2 = map.find(result[Iter->second - 1]);

        swap(result[Iter->second], result[Iter->second - 1]);
        swap(Iter->second, Iter2->second);
    }

    return result;
}