#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node * next;
} *front,*rear,*ptr;

void ins();
void del();
void display();
void mainMenu();

void ins(){
    system("clear");
    cout << "Enter element: " << endl;
    int ele;
    cin >> ele;
    system("clear");
    ptr= new Node;
    ptr -> data = ele;
    if(rear == NULL){
        rear = ptr;
        front = ptr;
    } else {
        rear -> next = ptr;
        rear = ptr;
    }
    display();
    mainMenu();
}

void del(){
    system("clear");
    Node * temp;
    if(front == NULL || front == rear){
        cout << "EMPT Q.\n";
        front=NULL;
        rear=NULL;
    } else {
        temp = front->next;
        delete front;
        front = temp;
    }
    display();
    mainMenu();
}

void display(){
    Node* temp;
    temp = new Node;
    temp = front;
    while(temp!=NULL){
        cout << temp->data << "->" ;
        temp =temp -> next;
    }
    cout << endl;
}

void mainMenu(){
    cout << "Linked Queue Program" << endl;
    cout << "1. Insert 2. Delete 3. Exit\n";
    char sel;
    cin >> sel;
    switch (sel)
    {
        case '1':
        ins();   
        break;

        case '2':
        del();
        break;

        default:
        break;
    }
}

int main(){
    rear=NULL;
    system("clear");
    mainMenu();
    return 1;
}
