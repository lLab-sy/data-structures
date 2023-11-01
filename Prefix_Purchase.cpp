#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

void solve(){
    int n, k; cin >> n;
    vector<pii> C;

    for(int i=0;i<n;++i){
        int x; cin >> x;
        C.emplace_back(x, -i);
    }
    cin >> k;

    sort(C.begin(), C.end());
    int last = -1, vlast = 0, pmx=1e9;
    vector<int> res(n+1, 0);
    for(auto& [val, idx]: C){
        if(-idx < last) continue;
        int dv = val-vlast;
        if(k == 0) break;
        int mx = min(pmx, k/dv);
        if(mx > 0){
            if(last != -1){
                res[last+1] += mx;
                k -= mx*dv;
            } else {
                res[0] += mx;
                k = k - (mx*val);
            }
            res[-idx+1] -= mx;
            last = -idx;
            vlast = val;
            pmx = mx;
        }
    }
    int sum = 0;
    for(int i=0;i<n;++i) {
        sum += res[i];
        cout << sum << " ";
    }cout << "\n";

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int Q; cin >> Q;

    while(Q--){
        solve();
    }

    return 0;
}