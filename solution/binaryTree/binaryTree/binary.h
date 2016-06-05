#ifndef SOLUTION_BINARYTREE_BINARYTREE_BINARY_H_
#define SOLUTION_BINARYTREE_BINARYTREE_BINARY_H_
#include <iostream>
#include <stack>

struct Node {
  int key;
  Node* left;
  Node* right;
  Node* parent;
};

int* dirround(Node *n);
int* revround(Node *n);
int* simround(Node *n);
#endif  // SOLUTION_BINARYTREE_BINARYTREE_BINARY_H_
