#include "binary.h"

int* dirround(Node* n) {
  int* arr = new int[7];
  int i = 0;
  std::stack <Node*> st;
  st.push(n);
  while (!st.empty()) {
    Node* tmp = st.top();
    st.pop();
    std::cout << tmp->key <<" ";
    arr[i] = tmp->key;
    i++;
    if (tmp->right != 0)
      st.push(tmp->right);
    if (tmp->left != 0)
      st.push(tmp->left);
  }
  std::cout << std::endl;
  return arr;
}

int* revround(Node* root) {
  int* arr = new int[7];
  int i = 0;
  std::stack<Node*> st;
  Node* tmp1 = NULL;
  Node* tmp2 = NULL;
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root -> left;
    } else {
      tmp1 = st.top();
      if (tmp1->right && tmp2 != tmp1->right) {
        root = tmp1->right;
      } else {
        st.pop();
        std::cout << tmp1->key <<" ";
        arr[i] = tmp1->key;
        i++;
        tmp2 = tmp1;
      }
    }
  }
  std::cout << std::endl;
  return arr;
}

int* simround(Node* root) {
  int* arr = new int[7];
  int i = 0;
  std::stack<Node*> st;
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root->left;
    } else {
      root = st.top();
      st.pop();
      std::cout << root->key <<" ";
      arr[i] = root->key;
      i++;
      root = root->right;
    }
  }
  std::cout << std::endl;
  return arr;
}
