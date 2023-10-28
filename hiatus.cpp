#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, Q;
    cin >> n >> Q;

    vector<pair<int, int> > chapterOut;
    int y, m;
    for(int i=0;i<n;++i){
        cin >> y >> m;
        chapterOut.emplace_back(y, m);
    }

    sort(chapterOut.begin(), chapterOut.end());
    while(Q--){
        cin >> y >> m;
        int pos = upper_bound(chapterOut.begin(), chapterOut.end(), make_pair(y, m)) - chapterOut.begin() - 1;
        
        if(pos < 0){
            cout << "-1 -1 "; 
        } else if(chapterOut[pos] == make_pair(y, m)){
            cout << "0 0 ";
        } else {
            auto& [py, pm] = chapterOut[pos];
            cout << py << " " << pm << " "; 
        }
    }

    return 0;
}