#include<iostream>
#include<stdlib.h>

using namespace std;

void push();
void pop();
void display();
void mainMenu();

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
    return 1;
}
