// Your code here

int check (int &maxIb , KeyT &ans,node *n){
    if(!n){
        return -1;
    }
    int rh = check(maxIb,ans,n->right);
    int lf = check(maxIb,ans,n->left);
    int ibl = abs(rh-lf);
    if(ibl>maxIb){
        ans = n->data.first;
        maxIb = ibl;
    }
    if(ibl == maxIb){
        if(mLess(n->data.first,ans)){
            ans = n->data.first;
        }
    }
    return 1+std::max(rh,lf);
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int maxIb = 0;
    KeyT ans = mRoot->data.first;
    check(maxIb,ans,mRoot);
    return ans;
    
}
