void shift(int k) {
	// TODO: Add your code here
	auto it = begin();
	if(k>0){
	k = k % mSize;
		while(k--){
			it++;
		}
	}
	else{
	k = k*-1;
	k = k % mSize;
	while(k--){
		it--;
	}
	}
	
	node *afTer = it.ptr;
	node *beFore = it.ptr->prev;
	node * endList = mHeader->prev;
	node *beGin = mHeader -> next;

	beGin ->prev = endList;
	endList->next  = beGin;
	
	afTer->prev = mHeader;
	beFore -> next = mHeader;
	mHeader -> next = afTer;
	mHeader -> prev =beFore;

	
	

}
