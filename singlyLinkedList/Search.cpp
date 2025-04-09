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


int searchIndex(Node* &head, int x) {
    int idx = 0;
    while (head) {
        if (head->val == x) return idx;
        head = head->next;
        idx++;
    }
    return -1;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;
        while (cin >> val && val != -1) {
            insert_node_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        cout << searchIndex(head, x) << endl;
    }

    return 0;
}
