#include "binary.h"
#include "binary.cpp"
#include <gtest.h>

TEST(bin, revround) {
    int arr2[7] = {4, 10, 7, 15, 25, 17, 12};
    Node *A = new Node;
    A->key = 12;
    A->parent = NULL;
    Node *B = new Node;
    Node *C = new Node;
    A->left = B;
    A->right = C;
    B->parent = A;
    B->key = 7;
    Node *D = new Node;
    Node *E = new Node;
    B->left = D;
    B->right = E;
    D->parent = B;
    D->key = 4;
    D->left = NULL;
    D->right = NULL;
    E->parent = B;
    E->key = 10;
    E->left = NULL;
    E->right = NULL;
    C->key = 17;
    Node *F = new Node;
    Node *G = new Node;
    C->left = F;
    C->right = G;
    F->parent = C;
    F->key = 15;
    F->left = NULL;
    F->right = NULL;
    G->parent = C;
    G->key = 25;
    G->left = NULL;
    G->right = NULL;
	int* arr = new int[7];
    arr = revround(A);
  for (int i = 0; i < 7; i++)
    EXPECT_EQ(arr2[i], arr[i]);
}

TEST(bin, simround) {
    int arr2[7] = {4, 7, 10, 12, 15, 17, 25};
    Node *A = new Node;
    A->key = 12;
    A->parent = NULL;
    Node *B = new Node;
    Node *C = new Node;
    A->left = B;
    A->right = C;
    B->parent = A;
    B->key = 7;
    Node *D = new Node;
    Node *E = new Node;
    B->left = D;
    B->right = E;
    D->parent = B;
    D->key = 4;
    D->left = NULL;
    D->right = NULL;
    E->parent = B;
    E->key = 10;
    E->left = NULL;
    E->right = NULL;
    C->key = 17;
    Node *F = new Node;
    Node *G = new Node;
    C->left = F;
    C->right = G;
    F->parent = C;
    F->key = 15;
    F->left = NULL;
    F->right = NULL;
    G->parent = C;
    G->key = 25;
    G->left = NULL;
    G->right = NULL;
  int* arr = new int[7];
    arr = simround(A);
  for (int i = 0; i < 7; i++)
    EXPECT_EQ(arr2[i], arr[i]);
}

TEST(bin, dirround) {
  int arr2[7] = {12, 7, 4, 10, 17, 15, 25};
    Node *A = new Node;
    A->key = 12;
    A->parent = NULL;
    Node *B = new Node;
    Node *C = new Node;
    A->left = B;
    A->right = C;
    B->parent = A;
    B->key = 7;
    Node *D = new Node;
    Node *E = new Node;
    B->left = D;
    B->right = E;
    D->parent = B;
    D->key = 4;
    D->left = NULL;
    D->right = NULL;
    E->parent = B;
    E->key = 10;
    E->left = NULL;
    E->right = NULL;
    C->key = 17;
    Node *F = new Node;
    Node *G = new Node;
    C->left = F;
    C->right = G;
    F->parent = C;
    F->key = 15;
    F->left = NULL;
    F->right = NULL;
    G->parent = C;
    G->key = 25;
    G->left = NULL;
    G->right = NULL;
	int* arr = new int[7];
    arr = dirround(A);
  for (int i = 0; i < 7; i++)
    EXPECT_EQ(arr2[i], arr[i]);
}
