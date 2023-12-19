#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int W = (int)park[0].size() - 1;
    int H = (int)park.size() - 1;
    int currentH = 0, currentW = 0;

    int size = (int)park.size();
    for (int i = 0; i < size; ++i) {
        if (park[i].find('S') != std::string::npos) {
            int startPos = (int)park[i].find('S');
            currentH = i;
            currentW = startPos;
            break;
        }
    }

    size = (int)routes.size();
    for (size_t i = 0; i < size; ++i) {
        char dir = routes[i][0];
        int move = (int)(routes[i][2] - 48);
        bool Ismove = true;

        switch (dir) {
        case 'N':
            if (!(currentH - move < 0)) {
                for (int j = 1; j <= move; ++j) {
                    if (park[currentH - j][currentW] == 'X') {
                        Ismove = false;
                        break;
                    }
                }

                if (Ismove)
                    currentH -= move;
            }
            break;
        case 'S':
            if (!(currentH + move > H)) {
                for (int j = 1; j <= move; ++j) {
                    if (park[currentH + j][currentW] == 'X') {
                        Ismove = false;
                        break;
                    }
                }

                if (Ismove)
                    currentH += move;
            }
            break;
        case 'W':
            if (!(currentW - move < 0)) {
                for (int j = 1; j <= move; ++j) {
                    if (park[currentH][currentW - j] == 'X') {
                        Ismove = false;
                        break;
                    }
                }

                if (Ismove)
                    currentW -= move;
            }
            break;
        case 'E':
            if (!(currentW + move > W)) {
                for (int j = 1; j <= move; ++j) {
                    if (park[currentH][currentW + j] == 'X') {
                        Ismove = false;
                        break;
                    }
                }

                if (Ismove)
                    currentW += move;
            }
            break;
        default:
            break;
        }
    }

    answer.push_back(currentH);
    answer.push_back(currentW);

    return answer;
}