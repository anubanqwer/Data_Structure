#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  if( mSize == 0 || mSize == 1 ) return;
  node *p = mHeader->next;
  node *q = mHeader->prev;
  mHeader->next = p->next;
  p->next->prev = mHeader;
  q->next = p;
  p->prev = q;
  p->next = mHeader;
  mHeader->prev = p;
}

#endif
