#include <iostream>
using namespace std;

class Node {
public:
  int data{0};
  Node *right{nullptr};
  Node *left{nullptr};

  Node(int _data) : data{_data} {}

  Node() { this->data = 0; }

  void print_self() const {
    cout << "Node(data=" << this->data << ")" << endl;
  }
};

int main() {
  Node *p{new Node()};
  Node *q{new Node(40)};
  p->print_self();
  q->print_self();
  return 0;
}