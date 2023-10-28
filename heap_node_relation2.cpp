#include <iostream>
#include <vector>
using namespace std;

int findRank(long long S, long long u){
    int cnt = 0;
    while(u > 0){
        u = (u-1)/S;
        cnt++;
    }
    return cnt;
}

int relation(long long S, long long a, long long b) {
    if(b < a) swap(a, b);
    if(a == b) return 4;

    int ra = findRank(S, a), rb = findRank(S, b);
    b = (b-1)/S;
    if(a == b) return 1;
    while(b > a){
        b = (b-1)/S;
    }
    if(a == b) return 2;
    return ra == rb ? 4: 3;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S, a, b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S, a, b) << " ";
    }
    cout << endl;
}