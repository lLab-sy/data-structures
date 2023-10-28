#include <iostream>
using namespace std;

int main(){
    int h, m, a;
    cin >> h >> m >> a;

    int total = h*60 + m;
    int after = (total + a) % 1440;
    printf("%02d %02d\n", after/60, after%60);

    return 0;
}