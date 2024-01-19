#include <string>
#include <vector>
#include <set>
#include <queue>

using namespace std;

struct myData {
    int prioritie;
    int location;
};

int solution(vector<int> priorities, int location) {
    int answer = 0;
    multiset<int> mSet;
    queue<myData> q;

    for (int i = 0; i < priorities.size(); i++) {
        mSet.insert(priorities[i]);
        myData newData;
        newData.location = i;
        newData.prioritie = priorities[i];
        q.push(newData);
    }

    while (true) {
        myData data = q.front();
        if (data.prioritie == *(--mSet.end())) {
            answer++;
            if (data.location == location)
                break;
            q.pop();
            mSet.erase(--mSet.end());
        } else {
            q.pop();
            q.push(data);
        }
    }
    return answer;
}