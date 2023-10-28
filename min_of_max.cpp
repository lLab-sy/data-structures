#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> pii;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m; cin >> n >> m;

    vector<int> A(m, 1);
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    for(int i=0;i<m;++i){
        pq.push(make_pair(A[i], i));
    }

    vector<pii> v(n, make_pair(0, 0));
    for(int i=0;i<n;++i) cin >> v[i].first;
    for(int i=0;i<n;++i) cin >> v[i].second;

    for(int i=0;i<n;++i){
        auto& [val, g] = v[i];
        A[g] = max(A[g], val);

        while(pq.top().first != A[pq.top().second]){
            int pg = pq.top().second;
            pq.pop();
            pq.push(make_pair(A[pg], pg));
        }

        cout << pq.top().first << " ";
    }
    

    return 0;
}