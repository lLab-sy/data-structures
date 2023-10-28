#include <iostream>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    if(n == 1){
        cout << 0;
        return 0;
    }
    int l2 = int(log2(n-1))+1;
    cout << int(pow(2, l2)) - n;
    return 0;
}