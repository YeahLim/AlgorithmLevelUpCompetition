using namespace std;

long long solution(int price, int money, int count)
{
    long long total = (long long) money;
    
    for (int i = 1; i <= count; i++) {
        total -= i * price;
    }
    
    return total > 0 ? 0 : total * -1;
}