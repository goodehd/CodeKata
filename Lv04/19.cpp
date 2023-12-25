#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> umap;
    priority_queue<int> pq;

    for (int i : tangerine) {
        umap[i]++;
    }

    for (auto i : umap) {
        pq.push(i.second);
    }

    while (k > 0) {
        ++answer;
        k -= pq.top();
        pq.pop();
    }

    return answer;
}