#include <iostream>
struct Node {
    int val;
    Node* next;
};
int main() {
    Node* a = new Node{10, nullptr};
    Node* b = new Node{20, nullptr};
    Node* c = new Node{30, nullptr};
    a->next = b;
    b->next = c;
    Node* head = a;
    head->next = c;
    delete b;
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}






