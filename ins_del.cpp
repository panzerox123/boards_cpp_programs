#include<iostream>
#include<stdlib.h>

using namespace std;

void ins();
void del();
void display();
void mainMenu();

int array[50];
int s;

void mainMenu(){
    cout << "Array ins del Program" << endl;
    cout << "1. ins 2. del 3. Exit\n";
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

void ins(){
    system("clear");
    cout << " ins ele: " ; 
    int ele;
    cin >> ele;
    int flag=s;
    for(int i = 0; i < s; i++){
        if(ele<array[i]){
            flag = i;
            break;
        }
    }
    cout << "flag : "<< flag << endl;
    for(int i = s; i >= flag; i--){
        array[i+1] = array[i];
    }
    array[flag]=ele;
    s++;
    display();
    mainMenu();
}

void del(){
    system("clear");
    cout << " del ele: " ; 
    int ele;
    cin >> ele;
    int flag;
    for(int i = 0; i < s; i++){
        if(ele==array[i]){
            flag = i;
            break;
        }
    }
    cout << "flag: " << flag << endl;
    for(int i = flag+1; i < s; i++){
        array[i-1] = array[i];
    }
    s--;
    display();
    mainMenu();
}

void display(){
    for(int i = 0;i<s;i++){
        cout << array[i] << endl;
    }
}

int main(){
    cout << "Enter array size . . . : " << endl;
    cin >> s;
    cout << "Enter array . . . : " << endl;
    for(int i = 0; i < s; i++){
        cin >> array[i];
    }
    system("clear");
    mainMenu();
    return 1;
}
