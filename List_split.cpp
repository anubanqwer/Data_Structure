#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  size_t N = mSize;
  CP::list<T> result;
  result.mSize = N - pos;
  mSize = pos;
  if (it == end()) return result;
  //
  auto first = mHeader->next;
  auto last = mHeader->prev;
  it.ptr->prev->next = mHeader;
  mHeader->prev = it.ptr->prev;

  result.mHeader->next = it.ptr;
  it.ptr->prev = result.mHeader;
  last->next = result.mHeader;
  result.mHeader->prev = last;


  return result;
}

#endif