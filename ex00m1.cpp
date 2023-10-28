#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int,int> pii;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m; cin >> n >> m;
    
    vector<int> T(n, 0);
    for(int i=0;i<n;++i) cin >> T[i];

    // {-time, chef}
    priority_queue<pii> pq;
    for(int i=0;i<min(m,n);++i){
        pq.push(make_pair(-T[i], i));
        cout << 0 << "\n";
    }

    for(int i=min(m,n);i<m;++i){
        auto& [pt, c] = pq.top();
        cout << -pt << "\n";
        pq.push(make_pair(pt-T[c],c));
        pq.pop();
    }

    return 0;
}