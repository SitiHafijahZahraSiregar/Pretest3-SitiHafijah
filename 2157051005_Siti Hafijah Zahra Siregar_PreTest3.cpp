#include <iostream>

using namespace std;
int main (){
	/*
	  Nama  : Siti Hafijah Zahra Siregar
	  NPM   : 2157051005
	  Kelas : B 
	*/

	//float//
	float gaji_karyawan , umr_daerah ;

    //input//
    cout << "MENENTUKAN GAJI SEORANG KARYAWAN APAKAH DIBAWAH UMR ATAU TIDAK " << endl ;
    cout << "Masukkan gaji karyawan : " ; cin >> gaji_karyawan ;
    cout << "Masukkan umr daerah : " ; cin >> umr_daerah ;

    cout << endl << endl ;
    
    //output//
    if (gaji_karyawan<umr_daerah){
    	cout << "Gaji anda di bawah UMR" ;
    } else if (gaji_karyawan==umr_daerah){
    	cout << "Gaji anda setara dengan UMR" ;
    } else {
    	cout << "Gaji anda diatas UMR ";
    }

}

