#include <iostream>
#include <set>
#include <vector>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, l;
    cin >> n >> m >> l;

    vector<int> hc;
    for(int i=0;i<l;++i){
        int c; cin >> c;
        hc.push_back(c);
    }

    set<string> allPass;
    for(int i=0;i<n;++i){
        string pass; cin >> pass;
        allPass.insert(pass);
    }

    while(m--){
        string pass; cin >> pass;
        string np = "";
        for(int i=0;i<l;++i){
            int asc = pass[i]-'a';
            int nasc = asc+hc[i];
            np += 'a'+(nasc)%26;
        }

        if(allPass.find(np) != allPass.end()){
            cout << "Match\n";
        }else{
            cout << "Unknown\n";
        }

    }

    return 0;
}
