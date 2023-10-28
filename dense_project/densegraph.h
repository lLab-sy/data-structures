#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
        g.assign(3, vector<bool>(3, false));
        t.assign(3, vector<bool>(3, false));
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        g.assign(n_in, vector<bool>(n_in, false));
        t.assign(n_in, vector<bool>(n_in, false));
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        g = G.g;
        t = G.t;
    }

    void AddEdge(int a, int b) {
        // Your code here
        g[a][b] = true;
        t[b][a] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        g[a][b] = false;
        t[b][a] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return g[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph nG;
        nG.n = n;
        nG.g = t;
        nG.t = g;
        return nG;
    }

protected:
    int n;
    // Your code here
    vector<vector<bool> > g, t;
};
#endif // __DENSE_GRAPH_H__
