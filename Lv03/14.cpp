#include <string>
#include <vector>

using namespace std;

const int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string weeks[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

string solution(int a, int b) {
    int date = b;
    for (int i = 1; i < a; ++i) {
        date += days[i - 1];
    }
    return weeks[date % 7];
}