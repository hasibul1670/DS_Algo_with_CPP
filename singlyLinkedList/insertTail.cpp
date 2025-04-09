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
void insert_node_head_at_tail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return 0;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;

    insert_node_head_at_tail(head, 40);
    insert_node_head_at_tail(head, 50);
    printLinkedList(head);

    return 0;
}