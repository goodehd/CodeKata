#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {

    vector<int> Combination;

    int answer = 0;
    int size = (int)ingredient.size();

    for (int i = 0; i < size; i++)
    {
        Combination.push_back(ingredient[i]);

        int ComSize = (int)Combination.size();

        if (ComSize >= 4 && Combination[ComSize - 1] == 1 &&
            Combination[ComSize - 2] == 3 && Combination[ComSize - 3] == 2
            && Combination[ComSize - 4] == 1)
        {
            Combination.erase(Combination.begin() + ComSize - 4,
                Combination.begin() + ComSize);
            answer++;
        }
    }

    return answer;
}