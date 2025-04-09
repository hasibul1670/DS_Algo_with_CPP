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

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (!tail) {
        tail = head;
    }
}

void delete_at_index(Node*& head, Node*& tail, int idx) {
    if (!head) return;
    int len = 0;
    Node* tempCount = head;
    while (tempCount) {
        len++;
        tempCount = tempCount->next;
    }

    if (idx < 0 || idx >= len) return; 

    if (idx == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (!head) tail = NULL;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < idx; i++) {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    if (!temp->next) tail = temp;
    delete deleteNode;
}



void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;
    Node* head = NULL;
    Node* tail = NULL;

    while (t--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, tail, v);
        }
        else if (x == 1) {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2) {
            delete_at_index(head, tail, v);
        }

        printLinkedList(head);

    }

    return 0;
}
