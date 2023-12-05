#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int rank[] = { 6, 6, 5, 4, 3, 2, 1 };
    int zero = 0;
    int check = 0;

    for (int i = 0; i < lottos.size(); ++i) {
        if (lottos[i] == 0)
            zero++;

        if (find(lottos.begin(), lottos.end(), win_nums[i]) != lottos.end())
            check++;
    }

    answer.push_back(rank[check + zero]);
    answer.push_back(rank[check]);

    return answer;
}