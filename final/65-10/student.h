#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void get_at_least(vector<T> &v, const &T k){
  if(mData[0]<=k){
    int i  = 0;
    while(i<mSize){
      if(mData[i]>=k){
        v.push_back(mData[i]);
      }
  }
n2->next_sibling = n1->left_child;
n1->left_child = n2;
  }
  
}


#endif

void get_at_least(vector<T> &v, const &T k) {
process(v,k,0);
}
void process(vector<T> &v, const &T k, int pos) {
if (pos >= mSize) return;
if (mLess(mData[pos]),k) return;
v.push_back(mData[pos]);
process(v,k,pos * 2 + 1);
process(v,k,pos * 2 + 2);


n2->next_sibling = n1->left_child;
n1->left_child = n2;


cs_node* generate(int n) {
if (n == 0) {
cs_node *a = new cs_node;
a.left_child = NULL;
a.right_sibling = NULL;
return a;
} else {
cs_node *a = generate(n-1);
cs_node *b = generate(n-1);
merge(a,b);
return a;
}

f (k >= mSize) return end();
node* n = root;
while (true) {
int size_left = 0;
if (n->left != NULL) {size_left = n->left.TreeSize;}
if (k < size_left) {
n = n->left;
} else if (k == size_left) {
return iterator(n);
} else {
k -= size_left + 1;
n = n->right;
}
}

void mirror(node* n) {
if (node == NULL) return;
mirror(n->left);
mirror(n->right);
std::swap(n->left,n->right);



node *a, *b;
a = this->mHeader->next;
b = other.mHeader->next;
for (int i = 0;i < mSize;i++) {
if (i % 2 == 1) {
a->prev->next = b;
a->next->prev = b;
node *tmpp = a->prev;
node &tmpn = a->next;
a->prev = b->prev;
a->next = b->next;
b->prev->next = a;
b->next->prev = a;
b->prev = tmpp;
b->next = tmpn;
}
a = a->next;
b = b->next;
}



if (k >= mSize) return end();
node* n = root;
while (true) {
  int size_left = 0;
  if (n->left != NULL) {
    size_left = n->left.TreeSize;
  }
  if (k < size_left) {
    n = n->left;
  } else if (k == size_left) {
      return iterator(n);
  } else {
    k -= size_left + 1;
    n = n->right;
  }
}
}



bool swap_value(T &v1 , T &v2){

  pair<int,bool> id_v1= {0,false};
  pair<int,bool> id_v2= {0,false};
  int i = 0;
  while(i<mSize){
      if(id_v1.second&&id_v2.second){
        break;
      }
      if(mData[i]==v1){
        id_v1 = {i,true};
      }
      if(mData[i]==v2){
        id_v2 = {i,true};
      }
      i++;
      
  }
  size_t p_1 = (id_v1.first-1)/2;
  size_t p_2 = (id_v2.first-1)/2;
  if(mLess(v1,mData[p_2]) && mLess(v2,mData[p_1])){
    std::swap(mData[id_v1.first],mData[id_v2.first]);
    return true;
  }
  return false;
}





namespace CP{
template<class Key, class T> class geometric_hash_grid {
protected:
//เพิม่ ฟังก์ชันหรือข้อมูลใดๆได้
CP::unordered_map<std::pair<int>,CP::unordered_map<T,int>> mGrid;
public: gometric_hash_grid() {
}
void insert(int x, int y, const T& data) {
  mGrid[std::make_pair(x,y)][data]++;
}
void remove(int x, int y, const T& data) {
  if( mGrid[std::make_pair(x,y)][data]>0){
     mGrid[std::make_pair(x,y)][data]--;
  }


}
std::vector<T> getDataAt(int x, int y) {
  if(mGrid[std::make_pair(x,y)])
}
std::vector<T> neighbors(int x, int y) {
} };
}