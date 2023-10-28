void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int n = (mSize+1)/2;
    auto f2 = begin();
    for(int i=0;i<n;++i) f2++;

    list1.mHeader->prev->next = begin().ptr;
    begin().ptr->prev = list1.mHeader->prev;

    list1.mHeader->prev = f2.ptr->prev;
    f2.ptr->prev->next = list1.mHeader;

    list2.mHeader->prev->next = f2.ptr;
    f2.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev = end().ptr->prev;
    end().ptr->prev->next = list2.mHeader;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    list1.mSize += n;
    list2.mSize += mSize-n;
    mSize = 0;
}
