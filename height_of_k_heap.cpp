#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k; cin >> n >> k;
    int res = 0;
    if(k == 1) res = n-1;
    else{
        long long pk = 1, spk = 1;
        while(spk < n){
            res++;
            pk *= k;
            spk += pk;
        }
    }
    cout << res;
    return 0;
}