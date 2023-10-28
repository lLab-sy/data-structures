.insert(A.begin()+p, k);
    
    int l=p, r=p;
    while(1){
        if(l < 0 or r >= A.size() or A[l] != A[r]) break;
        int tmp = A[l];
        while(l >= 0 and A[l] == tmp) l--;
        while(r < A.size() and A[r] == tmp) r++;
        if(r-l-1 < 3) break;
        A.erase(A.begin()+l+1, A.begin()+r);
        r = l+1;
    }