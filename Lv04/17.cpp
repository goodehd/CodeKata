#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> arr) {
    map<int, int> map;
    int answer = 0, i = 1;
    bool find = false;
    while (!find) {
        for (int j = 0; j < arr.size(); ++j) {
            map[arr[j] * i]++;
            if (map[arr[j] * i] == arr.size()) {
                answer = arr[j] * i;
                find = true;
            }
        }
        ++i;
    }
    return answer;
}