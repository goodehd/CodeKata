#include <string>
#include <vector>
#include <algorithm>

int index;

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    index = n;
    sort(strings.begin(), strings.end(),
        [](string src, string des) {
            if (src[index] == des[index])
                return src < des;
            return src[index] < des[index];
        });
    return strings;
}