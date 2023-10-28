void shift(int k) {
	// TODO: Add your code here
	if(mSize == 0) return;
	k = (k < 0)? -((-k)%mSize): k%mSize;
	if(k == 0) return;
	while(k != 0){
		if(k>0){
			mHeader->next->prev = mHeader->prev;
			mHeader->prev->next = mHeader->next;
			mHeader->prev = mHeader->next;
			mHeader->next = mHeader->next->next;
			mHeader->next->prev = mHeader;
			mHeader->prev->next = mHeader;
		}else{
			mHeader->next->prev = mHeader->prev;
			mHeader->prev->next = mHeader->next;
			mHeader->next = mHeader->prev;
			mHeader->prev = mHeader->prev->prev;
			mHeader->prev->next = mHeader;
			mHeader->next->prev = mHeader;
		}
		k += (k<0)? 1: -1;
	}
}
