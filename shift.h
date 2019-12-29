void shift(int k) {
	if( mSize == 1 || k==0 ) return;
	if( k > 0 ){
		while( k > 0 ){
		auto *p = mHeader->next;
		auto *q = mHeader->prev;
		mHeader->next = p->next;
		p->next->prev = mHeader;
		q->next = p;
		p->prev = q;
		p->next = mHeader;
		mHeader->prev = p;
		k--;
		}
	}
	else{
		while( k < 0){
			auto *q = mHeader->prev;
			auto *p = q->prev;
			q->next = mHeader->next;
			mHeader->next->prev = q;
			mHeader->next = q;
			q->prev = mHeader;
			mHeader->prev = p;
			p->next = mHeader;
			k++;
		}
	}
}
