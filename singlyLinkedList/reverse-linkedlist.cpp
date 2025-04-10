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
void reversePrint(Node* temp) {
    if (temp == NULL) {
        return;
    }
    else {
        reversePrint(temp->next);
        cout << temp->val << " ";
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
    reversePrint(head);


    return 0;
}