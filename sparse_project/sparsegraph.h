#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <set>
#include <vector>
using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        g.resize(3);
        t.resize(3);
    }

    SparseGraph(int n_in) {
        // Your code here
        g.resize(n_in);
        t.resize(n_in);
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        g = G.g;
        t = G.t;
    }

    void AddEdge(int a, int b) {
        // Your code here
        g[a].insert(b);
        t[b].insert(a);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(g[a].find(b) == g[a].end()) return;
        g[a].erase(b);
        t[b].erase(a);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return g[a].find(b) != g[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph tG;
        tG.g = t;
        tG.t = g;
        return tG;
    }

protected:
    // Your code here
    vector<set<int> > g, t;
};
#endif // __SPARSE_GRAPH_H__

