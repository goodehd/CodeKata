#include <vector>
#include <iostream>

using namespace std;

vector<bool> v(3001, true);

void recusive(int index, int count, int sum, vector<int>& nums, int& answer) {
    if (count == 3) {
        if (v[sum])
            answer++;
        return;
    }

    for (int i = index; i < nums.size(); ++i) {
        recusive(i + 1, count + 1, sum + nums[i], nums, answer);
    }
}

int solution(vector<int> nums) {
    int answer = 0;
    for (int i = 2; i * i <= 3001; ++i) {
        if (v[i]) {
            for (int j = i * i; j <= 3001; j += i) {
                v[j] = false;
            }
        }
    }

    recusive(0, 0, 0, nums, answer);

    return answer;
}