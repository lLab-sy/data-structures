#include <iostream>
using namespace std;

bool isA(int a, int b){
    if(a > b) swap(a, b);
    while(b > a) b = (b-1)/2;
    return a == b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m; cin >> n >> m;

    while(m--){
        int u, v; cin >> u >> v;
        if(u == v) cout << "a and b are the same node\n";
        else if(u < v and isA(u, v)) cout << "a is an ancestor of b\n";
        else if(v < u and isA(u, v)) cout << "b is an ancestor of a\n";
        else cout << "a and b are not related\n";
    }

    return 0;
}