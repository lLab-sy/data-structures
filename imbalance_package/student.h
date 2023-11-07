// Your code here

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT res = mRoot->data.first;
    int mx = -1;
    getMostImbalance(res, mx, mRoot);
    return res;
}

int getMostImbalance(KeyT& k, int& mx, node* n){
    if(n == NULL) return 0;
    int ml = getMostImbalance(k, mx, n->left), mr = getMostImbalance(k, mx, n->right);
    int d = abs(ml - mr);
    if(d > mx){
        mx = d;
        k = n->data.first;
    }else if(d == mx and compare(n->data.first, k) == -1){
        k = n->data.first;
    }
    return (ml>mr?ml:mr)+1;
}