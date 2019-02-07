#include<iostream>
#include<stdlib.h>

using namespace std;

void push();
void pop();
void display();
void mainMenu();

int stack[50];
int s,top;

void push(){
    system("clear");
    cout << "Enter Element: ";
    int ele;
    cin >> ele;
    system("clear");
    if(top<s){
        stack[top] = ele;
        top++;
    } else {
        cout << "Error. Stack overflow." << endl;
    }
    display();
    mainMenu();
}

void pop(){
    system("clear");
    if(top > 0) top--; else cout << "Error. Stack underflow." << endl; 
    display();
    mainMenu();
}

void display(){
    for(int i=top-1; i>=0;i--){
        cout << stack[i] << endl;
    }
}

void mainMenu(){
    cout << "Array Stack Program" << endl;
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
    cout << "Enter stack size . . . : " << endl;
    cin >> s;
    top = 0;
    system("clear");
    mainMenu();
    return 1;
}
