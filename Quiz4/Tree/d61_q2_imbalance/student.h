int compute(node* n, KeyT& ans, int& maxImb) {
    if (!n) return -1;
    int hl = compute(n->left, ans, maxImb);
    int hr = compute(n->right, ans, maxImb);
    int imb = hl-hr;
    if (imb < 0) imb = -imb;
    if (imb > maxImb) {
        ans = n->data.first;
        maxImb = imb;
    } else
    if (imb == maxImb) {
        if (mLess(n->data.first, ans)) {
            ans = n->data.first;

        }
    }
    return 1 + std::max(hl,hr);
}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int maxImb = 0;
    KeyT ans = mRoot->data.first;
    compute(mRoot, ans, maxImb);
    return ans;
}


