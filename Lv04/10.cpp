#include <string>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int> reportMap;
    unordered_map<string, set<string>> idReportMap;

    for (string reportString : report) {
        int idx = reportString.find(' ');

        string user = reportString.substr(0, idx);
        string declaration = reportString.substr(idx + 1);

        if (idReportMap[user].find(declaration) == idReportMap[user].end())
            reportMap[declaration]++;

        idReportMap[user].insert(declaration);
    }

    for (string user : id_list) {
        int count = 0;
        for (string declaration : idReportMap[user]) {
            if (reportMap[declaration] >= k)
                count++;
        }
        answer.push_back(count);
    }

    return answer;
}