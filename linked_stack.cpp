#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node * next;
} *top,*ptr;

void push();
void pop();
void display();
void mainMenu();

void push(){
    system("clear");
    cout << "Insert new element: \n";
    int ele;
    cin >> ele;
    if(top == NULL){
        ptr = new Node;
        ptr -> data = ele;
        top = ptr;
    } else if (top !=NULL){
        ptr = new Node;
        ptr -> data = ele;
        ptr->next = top;
        top = ptr;
    }
    system("clear");
    display();
    mainMenu();
}

void pop(){
    system("clear");
    if(top != NULL){
        top = top-> next;
    } else {
        cout << "Error. Underflow" << endl;
    }
    display();
    mainMenu();
}

void display(){
    Node * temp;
    temp = top; 
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

void mainMenu(){
    cout << "Linked Stack Program" << endl;
    cout << "1. Push 2. Pop 3. Exit\n";
    char sel;
    cin >> sel;
    switch (sel)
    {
        case '1':
        push();   
        break;

        case '2':
        pop();
        break;

        default:
        break;
    }
}

int main(){
    top=NULL;
    system("clear");
    mainMenu();
    return 1;
}
