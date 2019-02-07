#include<iostream>
#include<stdlib.h>

using namespace std;

int Arr[50];
int s;

void mainMenu();
void Input();
void LinearSearch();
void BinarySearch();

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

void LinearSearch(){
    system("clear");
    cout << "Input element: " << endl;
    int ele,flag;
    cin >> ele;
    for(int i = 0; i < s; i++){
        if(Arr[i]==ele) {
            flag = i;
            break;
        }
    }
    system("clear");
    cout << "FOUND : " << flag+1 << endl;
    mainMenu();
}

void BinarySearch(){
    system("clear");
    cout << "Input element: " <<endl;
    int ele,mid,beg,end,flag;
    cin >> ele;
    beg = 0;
    end = s-1;
    while(beg<=end){
        cout << beg << " " << end <<" " << mid << endl ;
        mid = (beg+end)/2;
        if(Arr[mid] > ele){
            end = mid-1;
        } else if(Arr[mid]<ele){
            beg = mid+1;
        } else if(Arr[mid] == ele){
            flag = mid;
            break;
        }
    }
    system("clear");
    cout << "FOUND : " << flag << endl;
    mainMenu();
}

void mainMenu(){
    cout << "Linear/Binary Search" << endl;
    cout << "1. Enter an Array\n2. Linear Search\n3. Binary Search" << endl;
    char sel;
    cin >> sel;
    switch(sel){
        case '1':
        Input();
        break;
        
        case '2':
        LinearSearch();
        break;

        case '3':
        BinarySearch();
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