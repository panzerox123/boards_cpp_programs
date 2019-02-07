#include<iostream>

using namespace std;

int A[10][10];
int B[10][10];
int C[10][10];
int x,y,m,n;
int i,j,k;
int main(){
    cout << "size of A ? " << endl;
    cin >> x >> y;
    cout << "elements of A? " << endl;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin >> A[i][j];
        }
    }

    cout << "size of B? " << endl;
    cin >> m >> n;
    cout << "elements of B? " << endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >> B[i][j];
        }
    }

    if(y==m){
        for(i = 0; i < x; i++){
            for(j = 0; j < n;j++){
                C[i][j]=0;
                for(k=0; k<m;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
    }
    cout << " OUTPUT  \n";
    for(i = 0; i< x; i++){
        for(j=0;j<n;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}