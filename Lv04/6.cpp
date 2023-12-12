#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lx = 0, ly = 50;
    int rx = 0, ry = 0;

    for (int i = 0; i < wallpaper.size(); ++i) {
        if (wallpaper[i].find('#') != std::string::npos) {
            lx = i;
            break;
        }
    }

    for (int i = 0; i < wallpaper.size(); ++i) {
        int pos = wallpaper[i].find('#');
        if (pos != std::string::npos && pos < ly) {
            ly = pos;
        }
    }

    for (int i = wallpaper.size() - 1; i >= 0; --i) {
        if (wallpaper[i].find('#') != std::string::npos) {
            rx = i + 1;
            break;
        }
    }

    for (int i = 0; i < wallpaper.size(); ++i) {
        int pos = wallpaper[i].rfind('#');
        if (pos != std::string::npos && pos >= ry) {
            ry = pos + 1;
        }
    }

    answer.push_back(lx);
    answer.push_back(ly);
    answer.push_back(rx);
    answer.push_back(ry);

    return answer;
}