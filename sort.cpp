#include<iostream>
#include<stdlib.h>

using namespace std;

int Arr[50];
int s;

void mainMenu();
void Input();
void Bubble();
void Selection();

void Input(){
    system("clear");
    cout << "Enter array size: " << endl;
    cin >> s;
    cout << "Enter sorted array: " <<endl;
    for(int i=0; i<s ; i++)
    cin >> Arr[i];
    system("clear");
    cout << "Input successful\n";
    mainMenu();
}

void Bubble(){
    int temp;
    for(int i =0; i<s-1;i++){
        for(int j = 0; j<s-i-1;j++){
            if(Arr[j]>Arr[j+1]){
                temp = Arr[j+1];
                Arr[j+1] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array: \n";
    for(int i = 0; i< s; i++){
        cout << Arr[i] << endl;
    }
    mainMenu();
}

void Selection(){
    int temp,pos,index;
    for(int i=0; i< s; i++){
        index = i;
        for(int j=i;j<s;j++){
            if(Arr[j]<Arr[index])
            index = j;
        }
        temp=Arr[i];
        Arr[i]=Arr[index];
        Arr[index]= temp; 
    }
    cout << "Sorted Array: \n";
    for(int i = 0; i< s; i++){
        cout << Arr[i] << endl;
    }
    mainMenu();
}

void mainMenu(){
    cout << "Sort" << endl;
    cout << "1. Enter an Array\n2. Bubble\n3. Selection" << endl;
    char sel;
    cin >> sel;
    switch(sel){
        case '1':
        Input();
        break;
        
        case '2':
        Bubble();
        break;

        case '3':
        Selection();
        break;

        default:
        system("clear");
        mainMenu();
    }
}

int main(){
    mainMenu();
    return 0;
}