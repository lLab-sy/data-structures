#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for(auto& v:A) s.insert(v);
    v = A;
    for(auto& b:B){
        if(s.find(b) == s.end()) v.push_back(b);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> sB;
    for(auto& b:B) sB.insert(b);
    for(auto& a:A)
        if(sB.find(a) != sB.end()) v.push_back(a);
    return v;
}
