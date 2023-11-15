void shift(int k) {
	// TODO: Add your code here
	auto it = begin();
	if(k>0){
		while(k--){
			if(it.ptr == mHeader){
				it++;
			}
		it++;
		}

	}
	else{
		k = k*-1;
		while(k--){
			if(it.ptr == mHeader){
				it--;
			}
		it--;
		}
	}
	node* newHeader = new node();
	newHeader->next = it.ptr;
	newHeader->prev = it.ptr->prev;
	it.ptr->prev->next = newHeader;
	it.ptr->prev = newHeader;
	
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	mHeader = newHeader;


	

}
