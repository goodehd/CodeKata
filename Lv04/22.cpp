#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<>());
    int Hindex = 0;
    for (Hindex = 0; Hindex < citations.size(); ++Hindex) {
        if (citations[Hindex] < (Hindex + 1))
            break;
    }
    return Hindex;
}