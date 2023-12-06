int countLessThan(node* r, ValueT a) {
if (!r) return 0;
if (r->height == 0) return (mLess(r->data,a) ? 1:0);
if (mLess(a, r->data)) return countLessThan(r->left, a);
int c = (r->left ? r->left->count : 0);
if (mLess(r->data, a)) {
c+=1 + countLessThan(r->right, a);
}
return c;
}
int countLessThan(ValueT a) {