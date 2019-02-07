#include<iostream>
#include<stdlib.h>

using namespace std;

void ins();
void del();
void display();
void mainMenu();

int queue[50];
int rear,front,s;

void ins(){
    system("clear");
    cout << "Insert element: " << endl;
    int ele;
    cin >> ele;
    system("clear");
    if(rear-front < s){
        queue[rear]=ele;
        rear++;
    } else cout << "Queue full ... " << endl;
    display();
    mainMenu();
}

void del(){
    system("clear");
    if(front<rear){
        front++; 
    } else if(rear == front){
        cout << "Error. Queue empty" << endl;
        rear = 0;
        front = 0;
    }
    display();
    mainMenu();
}

void display(){
    for(int i = rear-1; i >= front; i--){
        cout << queue[i] << "-->";
    }
    cout << endl;
}


void mainMenu(){
    cout << "Queue Stack Program" << endl;
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
    cout << "Enter queue size . . . : " << endl;
    cin >> s;
    rear = 0;
    front = 0;
    system("clear");
    mainMenu();
    return 1;
}
