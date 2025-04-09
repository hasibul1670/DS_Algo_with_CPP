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
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

}
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void remove_duplicate(Node* head) {
    // CurrentNode =CN, PreviousNode = PN, NextNode = NN
    Node* CN = head;
    while (CN != NULL) {
        Node* PN = CN;
        Node* NN = CN->next;
        while (NN != NULL) {
            if (CN->val == NN->val) {
                PN->next = NN->next;
                delete NN;
                NN = PN->next;
            }
            else {
                PN = NN;
                NN = NN->next;
            }
        }
        CN = CN->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int a;
    while (true) {
        cin >> a;
        if (a == -1) {
            break;
        }
        else {
            insert_node_at_tail(head, tail, a);
        }
    }
    int max = head->val, min = head->val;
    remove_duplicate(head);
    printLinkedList(head);


    return 0;
}