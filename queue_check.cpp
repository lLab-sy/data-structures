#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n; cin >> n;
    while(n--){
        int mf, ms, mc, ml, c; cin >> mf >> ms >> mc >> ml >> c;

        int mvl = mf+ms;
        if(mvl >= mc) mvl-=mc;
        if(mvl == ml){
            cout << "OK\n";
        }else{
            cout << "WRONG ";
            int rw = 0;
            if(c == 1){
                rw = ml-ms+mc;
                if(rw >= mc) rw -= mc;
            }else if(c == 2){
                rw = ml-mf+mc;
                if(rw >= mc) rw -= mc;
            }else if(c == 3){
                if(ml == mf+ms) rw = ml+1;
                else rw = mf+ms-ml;
            }else if(c == 4){
                rw = mf+ms;
                if(rw >= mc) rw -= mc;
            }
            if(c != 0) cout << rw;
            cout << "\n";
        }
    }

    return 0;
}