#include<iostream>
#include<fstream>
using namespace std;

int main(){
    cout << "LOADING . . ." << endl;
    ifstream fin("story.txt");
    int count=0;
    char ch='\0',ch1;
    while(!fin.eof()){
        ch1=fin.get();
        if((ch1== 'A' || ch1=='a') && (ch=='\n' || ch=='\0')){
            count++;
        }
        ch = ch1;
    }
    cout << count;
}