#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}


void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isSameToSame(Node* head, Node* head1) {
    if (head == NULL && head1 == NULL) {
        return true;
    }
    if (head == NULL || head1 == NULL) {
        return false;
    }
    if (head->val != head1->val) {
        return false;
    }
    return isSameToSame(head->next, head1->next);
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (cin >> val && val != -1) {
        insert_node_at_tail(head, tail, val);
    }
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val1;
    while (cin >> val1 && val1 != -1) {
        insert_node_at_tail(head1, tail1, val1);
    }

    bool res = isSameToSame(head, head1);
    cout << (res ? "YES" : "NO");
    return 0;
}
