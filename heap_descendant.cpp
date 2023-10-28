#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, a; cin >> n >> a;

    int p = 0;
    vector<int> res;
    res.push_back(a);
    while(p < res.size()){
        if(2*res[p]+1 < n) res.push_back(2*res[p]+1);
        if(2*res[p]+2 < n) res.push_back(2*res[p]+2);
        p++;
    }

    cout << res.size() << "\n";
    for(auto& x: res){
        cout << x << " ";
    }


    return 0;
}