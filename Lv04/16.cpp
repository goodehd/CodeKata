#include <iostream>
#include <vector>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    vector<int> vecA;
    vector<int> vecB;

    int round = n / 2;
    while (round > 0) {
        int around = a % 2 == 0 ? a / 2 : (a + 1) / 2;
        int bround = b % 2 == 0 ? b / 2 : (b + 1) / 2;
        vecA.push_back(around);
        vecB.push_back(bround);
        a = around;
        b = bround;
        round /= 2;
    }

    for (int i = 0; i < vecA.size(); ++i) {
        if (vecA[i] == vecB[i]) {
            answer = i + 1;
            break;
        }
    }

    return answer;
}