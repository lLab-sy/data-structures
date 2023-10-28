#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;

    int val;
    set<int> B;
    for(int i=0;i<n;++i){
        cin >> val;
        if(val<1 or val>n){
            goto caseNo;
        }
        B.insert(val);
    }

    if(B.size() == n){
        caseNo:
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}