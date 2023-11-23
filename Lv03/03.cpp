#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int sizep = p.size();

    for (int i = 0; i <= t.size() - sizep; ++i) {
        string buffer = t.substr(i, sizep);
        if (stoull(buffer) <= stoull(p))
            answer++;
    }

    return answer;
}