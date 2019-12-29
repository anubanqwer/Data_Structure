void splitList(list<T>& list1, list<T>& list2) {
    if( mSize==0 ) return;
    if( mSize == 1 ){
      node *p = mHeader->next;
      node *q = list1.mHeader->prev;
      q->next = p;
      p->prev = q;
      p->next = list1.mHeader;
      list1.mHeader->prev = p;
      delete mHeader;
    }
    if( mSize > 1 ){
    size_t a,b;
    b = mSize / 2;
    a = mSize - b;
    node *p3 = mHeader->prev;
    node *p = mHeader;
    //while(a--){ p = p->next; }
    for(size_t i = 0 ;i < a; i++) p = p->next;
    node *p2 = p->next;
    node *q = list1.mHeader->prev;
    p->next = list1.mHeader;
    p->next->prev = p;
    q->next = mHeader->next;
    mHeader->next->prev = q;
    //list2
    node *r = list2.mHeader->prev;
    r->next = p2;
    p2->prev = r;
    p3->next = list2.mHeader;
    list2.mHeader->prev = p3;

    mSize = 0;
    list1.mSize += a;
    list2.mSize += b;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    node *destruct = mHeader;
    delete destruct; }
}
