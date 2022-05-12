#include<iostream>
using namespace std; 
int main(){
    int mat[3][3], i, j;
    float determinan = 0;
    cout<<"Masukkan nilai matriks: " << endl;
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++){
        cout<<"matriks ["<<i<<"]["<<j<<"] : ";cin >> mat[i][j];
    }
    cout << endl;
    cout << "Matriks: " << endl;
    for(i = 0; i < 3; i++){
        cout<<"\n";
        for(j = 0; j < 3; j++)
        cout<<mat[i][j]<<"\t";
    }

    for(i = 0; i < 3; i++)
    determinan = determinan + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
    cout<<"\n\nHasil invers matriks\n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
        cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinan<<"\t";
        cout<<"\n";
    }
 
   return 0;
}