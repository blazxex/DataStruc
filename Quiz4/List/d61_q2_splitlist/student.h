void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here

    int secondSize = mSize / 2;
    int firstSize = secondSize + (mSize % 2);

    node *st = mHeader -> next;
    node *stp = mHeader -> next;
    node *scnd = mHeader->prev;
    for(int i = 0 ; i < firstSize ; i ++){
        stp = stp->next;   //got begin of second list;
    }

    st->prev = list1.mHeader->prev;
    list1.mHeader->prev->next = st;
    list1.mHeader->prev = stp->prev;
    stp->prev->next = list1.mHeader;

    list1.mSize += firstSize;

    if(secondSize>0){
        stp->prev = list2.mHeader -> prev;
        list2.mHeader->prev->next = stp;
        list2.mHeader->prev = scnd;
        scnd->next= list2.mHeader;

        list2.mSize += secondSize;
        
    }
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;



}

