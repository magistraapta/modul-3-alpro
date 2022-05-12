#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Jika Ordo Matriks (a*a) maka masukkan nilai a : "; cin>>a;
	int matriks1[a][a], matriks2[a][a], matriksbantu[a*a];
	int bantu=0;
    cout << "Matriks 1" << endl;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cout<<"matriks1 ["<<i<<"]["<<j<<"] : "; cin>>matriks1[i][j];
		}
}
	cout<<endl;
    cout << "Matriks 2" << endl;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cout<<"matriks1 ["<<i<<"]["<<j<<"] : "; cin>>matriks2[i][j];}}
	cout<<"\n==============================================\n"<<"Matriks 1 Sebelum diurutkan : \n";
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cout<<matriks1[i][j]<<"\t";}
		cout<<endl;}
	cout<<"\n==============================================\n"<<"Matriks 2 Sebelum diurutkan : \n";
	for( int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cout<<matriks2[i][j]<<"\t";}
		cout<<endl;}
	cout<<"\n==============================================\n"<<"Matriks 1 setelah diurutkan : \n";
	for( int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			for(int k=0; k<a; k++){
				for(int l=0; l<a; l++){
					if (matriks1[k][l]>matriks1[i][j]){
					int help=matriks1[k][l];
					matriks1[k][l]=matriks1[i][j];
					matriks1[i][j]=help;}
				}
			}
		}
	}
	for( int i=0; i<a; i++){
		for(int j=0; j<a; j++){
		cout<<matriks1[i][j]<<"\t";}
		cout<<endl;}
		cout<<endl;
cout<<"\n==============================================\n"<<"Matriks 2 Setelah diurutkan : \n";
	for( int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			for(int k=0; k<a; k++){
				for(int l=0; l<a; l++){
					if (matriks2[k][l]>matriks2[i][j]){
					int help=matriks2[k][l];
					matriks2[k][l]=matriks2[i][j];
					matriks2[i][j]=help;}
				}
			}
		}
	}
	for( int i=0; i<a; i++){
		for(int j=0; j<a; j++){
		cout<<matriks2[i][j]<<"\t";}
		cout<<endl;}
		cout<<endl;
	cout<<"\n==============================================\n"<<"Matriks 1 * Matriks 2 : \n";
	int kali=0;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			for(int k=0;k<a;k++){
				kali=matriks1[i][k]*matriks2[k][j];
            }
			cout<<kali<<"\t";
			kali=0;}
			cout<<endl;}
}