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

void printLinkedList(Node*& temp, int idx, int idx2) {

    int currentIndex = 0;
    while (temp != nullptr) {
        if (currentIndex >= idx && currentIndex <= idx2) {
            cout << temp->val << " ";
        }
        temp = temp->next;
        currentIndex++;
    }
}


void findMiddle(Node* temp, int& count) {
    if (temp == NULL) {
        return;
    }
    count++;
    findMiddle(temp->next, count);
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
    int count = 0;
    findMiddle(head, count);
    if (count % 2 == 0) {
        int idx = (count / 2) - 1;
        int idx2 = (count / 2);
        printLinkedList(head, idx, idx2);
    }
    else {
        int idx = count / 2;
        cout << idx << idx << endl;
        printLinkedList(head, idx, idx);

    }


    return 0;
}