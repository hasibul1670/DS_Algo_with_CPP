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

void getMaxMin(Node* head, int max, int min) {
    Node* temp = head;

    for (Node* i = head; i != NULL; i = i->next)
    {
        if (i->val > max) {
            max = i->val;
        }
        else if (i->val < min) {
            min = i->val;
        }
    }
    cout << max - min;

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
    // printLinkedList(head);
    getMaxMin(head, max, min);



    return 0;
}