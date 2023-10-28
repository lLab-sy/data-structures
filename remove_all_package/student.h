#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  auto it = mHeader->next;
  while(it != mHeader){
    if(it->data == value){
      auto tar = it;
      tar->next->prev = tar->prev;
      tar->prev->next = tar->next;
      it = it->next;
      delete tar;
      mSize--;
      continue;
    }
    it = it->next;
  }
}

#endif
