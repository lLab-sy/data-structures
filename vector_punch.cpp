#include <iostream>
#include <vector>
using namespace std;

vector<string> punch(vector<string>& v, vector<string>::iterator it, int k) {
    int n = v.size(), pos = it-v.begin();
    
    vector<string> res;
    for(int i=0;i<n;++i){
        if(i < pos-k or i > pos+k){
            res.push_back(v[i]);
        }
    }

    return res;
}

int main() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto& x : result) {
        cout << x << endl;
    }
}