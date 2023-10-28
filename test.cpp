#include <iostream>
#include <set>
using namespace std;

set<vector<int> > sv;
bool dp[20][20][20][20];

void solve(int w, int x, int y, int z){
    if(dp[w][x][y][z]) return ;
    if(w >= 6 or y >= 5) return ;
    if(w+x+y+z == 17){
        vector<int> nv;
        nv.push_back(w);
        nv.push_back(x);
        nv.push_back(y);
        nv.push_back(z);
        sv.insert(nv);
        cout << w << " " << x << " " << y << " " << z << endl;
        return;
    }
    solve(w+1, x, y, z);
    solve(w, x+1, y, z);
    solve(w, x, y+1, z);
    solve(w, x, y, z+1);
    dp[w][x][y][z] = true;
    
}

int main(){
    solve(0, 0, 0, 3);
    cout << sv.size();
    return 0;
}