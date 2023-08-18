#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head = nullptr;

void createlist(int d){
    struct node* newnode = new struct node;
    newnode->data = d;
    newnode->next = nullptr;
    if (head == nullptr){
        head = newnode;
    }
    else {
        struct node* temp = head;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void printlist(struct node* rt){
    struct node* temp = rt;
    while (temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
}
struct node* head1=nullptr;
void reverselist(struct node* rt){
    struct node* temp=rt;
    struct node* prev=nullptr;

    while(temp!=nullptr){
        struct node* nextNode = temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    struct node* head1=prev;
    printlist(head1);
}

int main() {
    int n;
    cout << "Enter the number of nodes u want to enter:";
    cin >> n;
    int a, data;
    cout << "Enter the root node: ";
    cin >> data;

    struct node* root = new struct node; // Create the root node
    root->data = data;
    root->next = nullptr;

    head = root; // Set head to point to the root node

    cout << "Enter the nodes: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the node: ";
        cin >> a;
        createlist(a);
    }
    cout<<"Linked list : ";
    printlist(head);
    cout<<endl;
    cout<<"Reversed Linked list : ";
    reverselist(head);

    // Free memory by deleting nodes
    struct node* current = head;
    while (current != nullptr) {
        struct node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
