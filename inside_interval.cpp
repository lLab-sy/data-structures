#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<pii> vInterval;
    int leftSide, rightSide;
    for(int i=1;i<=n;++i){
        cin >> leftSide >> rightSide;
        vInterval.emplace_back(rightSide, leftSide);
    }

    sort(vInterval.begin(), vInterval.end());

    int tar;
    while(m--){
        cin >> tar;

        int pos = lower_bound(vInterval.begin(), vInterval.end(), make_pair(tar, 0)) - vInterval.begin();
        if(pos == n) goto caseNo;

        if(vInterval[pos].second <= tar) goto caseYes;


        caseNo:
        cout << "0 ";
        continue;

        caseYes:
        cout << "1 ";        
    }    


    return 0;
}