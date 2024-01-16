#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool check(unordered_map<string, int>& map1, unordered_map<string, int>& map2) {
    for (const auto& pair : map1) {
        const string& key = pair.first;
        if (map1[key] != map2[key])
            return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    unordered_map<string, int> wantMap;
    unordered_map<string, int> discountMap;
    int answer = 0;

    for (int i = 0; i < want.size(); ++i) {
        wantMap.insert(make_pair(want[i], number[i]));
    }

    for (int i = 0; i < 10; ++i) {
        discountMap[discount[i]]++;
    }

    if (check(wantMap, discountMap))
        answer++;;

    for (int i = 10; i < discount.size(); ++i) {
        discountMap[discount[i]]++;
        discountMap[discount[i - 10]]--;

        if (check(wantMap, discountMap))
            answer++;
    }

    return answer;
}