#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> pii;

int findSumAtDayP(vector<pii>& c, vector<int>& t, int p){
    int px = upper_bound(c.begin(), c.end(), make_pair(p, 2000)) - c.begin() - 1;
    int totalX = t[px] + (p-c[px].first+1)*c[px].second; 
    return totalX;
}

int findDayThatSum(vector<pii>& c, vector<int>& t, int sum){
    int p = upper_bound(t.begin(), t.end(), sum) - t.begin() - 1;
    int d = sum - t[p];
    return c[p].first + (d+c[p].second-1)/c[p].second - 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, st; cin >> n >> m >> st;

    vector<pii> change;
    change.emplace_back(0, st);
    for(int i=0;i<n;++i){
        int a, s; cin >> a >> s;
        change.emplace_back(a, s);
    }

    sort(change.begin(), change.end());
    
    vector<int> total;
    total.emplace_back(0);

    int sum = 0, r = st, p = 0;
    for(int i=1;i<=n;++i){
        auto& [a, s] = change[i];
        sum += r*(a-p);
        int t = sum;
        r = s;
        p = a;
        total.emplace_back(t);
    }

    while(m--){
        int p, x; cin >> p >> x;

        int totalX = findSumAtDayP(change, total, x);

        if(totalX < p){
            p += totalX;
        }
        
        cout << findDayThatSum(change, total, p) << " ";
    }

    return 0;
}