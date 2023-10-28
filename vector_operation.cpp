#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int Q;
    scanf("%d", &Q);

    vector<int> res;
    string op;
    int val;
    while(Q--){
        cin >> op;
        if(op == "pb" or op == "d"){
            cin >> val;
            if(op == "d"){
                res.erase(res.begin()+val);
            }else{
                res.push_back(val);
            }
        }else{
            if(op == "sa" or op == "sd"){
                sort(res.begin(), res.end());
            }
            if(op == "sd" or op == "r"){
                reverse(res.begin(), res.end());
            }
        }
    }

    int n = res.size();
    for(int i=0;i<n;++i){
        printf("%d ", res[i]);
    }    
    return 0;
}