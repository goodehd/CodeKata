#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> mapTerms;

    for (int i = 0; i < terms.size(); ++i) {
        mapTerms.insert(make_pair(terms[i].front(), stoi(terms[i].substr(terms[i].find(' ') + 1))));
    }

    int todayDate = stoi(today.substr(0, 4)) * 336 + stoi(today.substr(5, 7)) * 28 + stoi(today.substr(8, 10));
    for (int i = 0; i < privacies.size(); ++i) {
        int privaciesDate = stoi(privacies[i].substr(0, 4)) * 336 + stoi(privacies[i].substr(5, 7)) * 28 + stoi(privacies[i].substr(8, 10));
        int expirationDate = mapTerms.find(privacies[i][11])->second * 28;
        if (todayDate - privaciesDate >= expirationDate)
            answer.push_back(i + 1);
    }

    return answer;
}