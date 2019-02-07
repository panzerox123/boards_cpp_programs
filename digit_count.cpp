#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>

using namespace std;

void File1();
void File2();
void count();

void menu(){
    cout << "File Program 2\n1. Create file 1\n2. Create file 2\n3. Count Vowels, Digits, words\n";
    char sel;
    cin >> sel;
    switch(sel){
        case '1':
        File1();
        break;

        case '2':
        File2();
        break;

        case '3':
        count();
        break;

        case '4':
        break;
    }
}

void File1(){
    char str[100];
    cin.ignore();
    cin.getline(str,100);
    ofstream fout("file1.txt");
    fout << str;
    fout.close();
    menu();
}

void File2(){
    char str[100];
    ifstream fin("file1.txt");
    fin.getline(str,100);
    fin.close();
    for(int i =0; i< 100; i++){
        if(str[i]==' ') str[i]='#';
    }
    ofstream fout("file2.txt");
    fout << str;
    fout.close();
    menu();
}

void count(){
    char str[100];
    ifstream fin("file1.txt");
    fin.getline(str,100);
    fin.close();

    int i,count_w=0,count_v=0,count_d=0;
    for(i = 0; i<100;i++){
        if(str[i] != ' ' && ( str[i-1] == ' ' || i==0)){
            count_w++;
        }
    }
    for(i =0 ; i<strlen(str); i++){
        if(isdigit(str[i])) count_d++;
    }
    for(i=0;i<strlen(str);i++){
        if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u')
        count_v++;
    }
    cout << "Digits: " << count_d << endl<<"Vowels: " << count_v << endl<<"Words: " << count_w<< endl;
    menu();
}

int main(){
    menu();
    return 1;
}