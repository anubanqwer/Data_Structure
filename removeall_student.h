#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
    node *p = mHeader;
    int count = 0;
    while( p->next != mHeader ){
        if( p->next->data == value ){
            node *q = p->next;
            p->next = p->next->next;
            p->next->prev = p;
            count++;
            delete q;
        }
        else{ p = p->next; }
    }
    p->next = mHeader;
    mHeader->prev = p;
    mSize -= count;
}

#endif
