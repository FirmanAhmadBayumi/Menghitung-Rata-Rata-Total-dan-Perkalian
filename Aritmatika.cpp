#include <iostream>
using namespace std;
int main (){
float hari, nilai_pembelian, jumlah, rata_rata;

cout<<"";
cin>>hari;

jumlah = 0;
cout<<"";

for(int i = 0; i< hari; i++){
 float nilai_pembelian[i];
 cin >> nilai_pembelian[i];
 jumlah+=nilai_pembelian[i];
}

rata_rata = jumlah/hari;
cout<<"Rata-Rata :"<<rata_rata<<" ETH"<<endl;
cout<<"Total :"<<jumlah<<" ETH "<<endl;
cout<<"ETH ke Dolar :$"<<jumlah*4000;
}