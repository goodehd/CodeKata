#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string strFood1 = "";
    string strFood2 = "";
    vector<int> foods;
    for (int i = 1; i < food.size(); ++i) {
        for (int j = 0; j < food[i] / 2; ++j) {
            strFood1 = strFood1 + (char)('0' + i);
            strFood2 = (char)('0' + i) + strFood2;
        }
    }

    return strFood1 + "0" + strFood2;
}