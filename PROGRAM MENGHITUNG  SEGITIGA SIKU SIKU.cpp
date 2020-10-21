#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <string.h>
#include <math.h>




using namespace std;

int main()
{

int kode;
float hasil,keliling,alas,tinggi,sisimiring;
char ulang;
    do{

cout<<endl;
cout<<"============================================================="<<endl;
cout<<"              MENU MENHITUNG SEGITIGA SIKU-SIKU               "<<endl;
cout<<"=============================================================\n"<<endl;
cout<<endl;
    
cout<< "1. HITUNG PANJANG SISI MIRING "<<endl;
cout<< "2. HITUNG LUAS "<<endl;
cout<< "3. HITUNG KELILING "<<endl;
cout<< "4. KELUAR PROGRAM "<<endl;
cout<<endl;

cout<< "SILAHKAN PILIH [1/2/3/4] : ";cin>>kode;



switch (kode){

/* Inputan Kesatu */
case 1 : {

cout<<"MENGHITUNG PANJANG SISI MIRING"<<endl;
cout<<" "<<endl;


cout <<" Masukkan alas segitiga   : ";
     cin >>alas;
cout <<" Masukkan tinggi segitiga : ";
     cin >> tinggi;
     
hasil = sqrt((alas*alas)+(tinggi*tinggi));
cout<<" "<<endl;
cout<<"Panjang Sisi miring : "<<hasil;

break;
}

/* Inputan Kedua */
case 2 : {
cout<<"MENGHITUNG LUAS SEGITIGA"<<endl;
cout<<" "<<endl;


cout<<"Masukan alas segitiga   : ";
    cin>>alas;
cout<<"Masukan tinggi segitiga : ";
    cin>>tinggi;

hasil = alas*tinggi/2;
cout<<" "<<endl;
cout<<"Luas segitiga           : "<<hasil;

break;
}

/* Inputan Ketiga */
case 3 : {
cout<<"MENGHITUNG KELILING SEGITIGA"<<endl;
cout<<" "<<endl;


cout<<"masukan alas segitiga        : ";
    cin>>alas;
cout<<"masukan tinggi segitiga      : ";
    cin>>tinggi;
cout<<"masukan sisi miring segitiga : ";
    cin>>sisimiring;

keliling=alas+tinggi+sisimiring;
cout<<"keliling segitiga            : "<<keliling;
    
break;
}

/* Inputan keempat */ 	
case 4 : cout<<"Apakah anda ingin keluar?(Y/T)";
    		cin>>ulang;
    		break;
    default:cout<<"Maaf Inputan Tidak Benar";
			break;
}
} 
    while (ulang=='t'||ulang=='T');
    cout<<endl;
    cout<<"\nTerima Kasih Telah Menggunakan Program Ini";
}

		


