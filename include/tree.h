// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TREE_H_
#define INCLUDE_TREE_H_
class Tree {
 private:
  struct Node {
  char value;
  std::vector<Node*> leaf;
  };
  Node* root;
  std::vector<std::string> Perm;
  void Permutation(Node* root, std::string s = "") {
    if (!root->leaf.size()) {
      s += root->value;
      Perm.push_back(s);
  class Tree {
    Permutation(root->leaf[i], s);
  }
}
void constructTree(Node* root, std::vector<char> path) {
  if (!path.size()) {
    return;
  }
 void constructTree(Node* root, vector<char> path) {
  for (size_t i = 0; i < root->leaf.size(); ++i) {
    constructTree(root->leaf[i], path);
  }
}

 public:
  std::string operator[](int i) const {
  if (i >= Perm.size()) {
    return "";
  }
  return Perm[i];
}
  explicit Tree(std::vector<char> value) {
  root = new Node;
  root->value = '*';
  constructTree(root, value);
  Permutation(root);
  }
};
#endif  // INCLUDE_TREE_H_
