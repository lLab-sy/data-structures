#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> A;
    int val;
    for(int i=0;i<n;++i){
        cin >> val;
        A.push_back(val);
    }

    sort(A.begin(), A.end());
    for(int i=0;i<m;++i){
        cin >> val;
        int res = upper_bound(A.begin(), A.end(), val+k) - lower_bound(A.begin(), A.end(), val-k);
        cout << res << " "; 
    }
    return 0;
}