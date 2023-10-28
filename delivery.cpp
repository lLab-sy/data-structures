#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> goals(m, 0);
    for (int i = 0;i < m;++i) cin >> goals[i];

    vector<queue<int> > vq(2, queue<int>());
    vector<int> priceStep;

    priceStep.emplace_back(0);

    while (n--) {
        int op; cin >> op;
        if (op == 1) {
            int a, b; cin >> a >> b;
            vq[a - 1].push(b);
        }
        else {
            if (!vq[0].empty() and !vq[1].empty()) {
                if (vq[0].front() <= vq[1].front()) goto case0;
                else goto case1;
            }
            else if (vq[0].empty()) {
            case1:
                priceStep.emplace_back(priceStep.back() + vq[1].front());
                vq[1].pop();
            }
            else {
            case0:
                priceStep.emplace_back(priceStep.back() + vq[0].front());
                vq[0].pop();
            }
        }
    }

    n = priceStep.size();
    for (auto& goal : goals) {
        int p = lower_bound(priceStep.begin(), priceStep.end(), goal) - priceStep.begin();

        if (p >= n) p = -1;
        cout << p << " ";
    }

    return 0;
}