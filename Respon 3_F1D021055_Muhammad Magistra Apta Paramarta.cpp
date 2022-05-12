#include <iostream>
using namespace std;
int main()
{
   int sz;
   cout<<"Masukkan Jumlah data:";
   cin>>sz;
   int array[sz];
   for(int i=0;i<sz;i++)
      array[i]= rand()%100;

  
   for(int i=0;i<sz;i++)
      cout<<"Data random: "<<i+1<<"::"<<array[i]<<endl;
   return 0;
}