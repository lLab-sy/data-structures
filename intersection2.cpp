#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    // get size of vector
    int n, m;
    cin >> n >> m;
    
    // create set
    set<int> a, b;

    int val;
    // get first vector
    for(int i=0;i<n;++i){
        cin >> val;
        a.insert(val);
    }

    // get second vector
    for(int i=0;i<m;++i){
        cin >> val;
        b.insert(val);
    }


    return 0;
}