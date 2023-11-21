using namespace std;

long long solution(int price, int money, int count)
{
    long long pri = price;
    long long answer = (pri + pri * count) * count / 2;
    return money - answer < 0 ? -(money - answer) : 0;
}