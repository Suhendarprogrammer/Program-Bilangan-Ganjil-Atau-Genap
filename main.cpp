#include <iostream>
using namespace std;
int main ()
{
    int nilai,hasil;
    cout<<"*********PROGRAM MENENTUKAN BILANGAN GANJIL GENAP*********\n";
    cout<<"==========================================================\n";
    cout<<"\nMasukkan Nilainya : ";
    cin>>nilai;
    hasil=nilai%2;
    cout<<"\nMaka, Hasilnya Adalah : ";
    if (hasil==0)
        cout<<"Genap";
    else
        cout<<"Ganjil";
    return 0;

}
