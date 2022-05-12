#include <iostream>
#include <string>
using namespace std;
int main(){
int universe, orang;
string key;
string huruf = "";
int x = 0, y = 0;
cout << "Masukkan jumlah universe\t: "; cin >> universe;
cout << "Jumlah orang tiap universe\t: "; cin >> orang; cin.get();
cout << "Masukkan huruf\t\t\t: "; getline(cin, key);
string nama[universe][orang];
for(int i = 0; i < universe; i++){
cout << "\nUniverse " << i+1 << endl;
for(int j = 0; j < orang; j++){
cout << "Orang Ke-" << j+1 << " : "; getline(cin,

nama[i][j]);
}
}
for(char l = 'a'; l <= 'z'; ++l) {
x++;
if(key[0] == l){
huruf = l;
break;
}
}
for(char l = 'A'; l <= 'Z'; ++l) {
y++;
if(x == y){
huruf += l;
break;
}
}
for(int i = 0; i < universe; i++){
for(int j = 0; j < orang; j++){
for(int k = 0; k < nama[i][j].length(); k++){
if(nama[i][j][k] == huruf[0] || nama[i][j][k] ==

huruf[1]){

for(int l = k; l < nama[i][j].length();

l++){

nama[i][j][l] = nama[i][j][l+1];
}
}
}
}
}
for(int i = 0; i < universe; i++){
cout << "\nUniverse " << i+1 << endl;
for(int j = 0; j < orang; j++){
if(nama[i][j] == nama[i][j+1]){
if(nama[i][j+1] == nama[i][j+2]){
nama[i][j+2] = "";
} else {
cout << nama[i][j];
nama[i][j+1] = "";
}
}
else {
cout << nama[i][j] << endl;
}
}
}
return 0;
}
