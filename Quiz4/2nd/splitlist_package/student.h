void splitList(list<T>& list1, list<T>& list2) {
  if(mSize>0){
  int second = mSize / 2;
  int first = mSize - second;
  auto it = begin();
  for(int i = 0 ; i < first ; i ++){
    it++;
  }
  
  node *secondFirst = it.ptr;
  node *firstFirst = mHeader->next;
  node *firstLast = it.ptr->prev;
  node *secondLast = mHeader->prev;

  node *lastOfList1 = list1.mHeader -> prev;
  node *lastOfList2 = list2.mHeader -> prev;
  

  lastOfList1->next = firstFirst;
  firstFirst->prev = lastOfList1;
  firstLast->next = list1.mHeader;
  list1.mHeader->prev = firstLast;
  if(second>0){
  lastOfList2->next = secondFirst;
  secondFirst->prev = lastOfList2;
  secondLast->next = list2.mHeader;
  list2.mHeader->prev = secondLast;
  list2.mSize = second;
  }

  mHeader->next = mHeader;
  mHeader->prev = mHeader;

  mSize = 0;
  list1.mSize = first;
  
  }
    // Add your code here




}
