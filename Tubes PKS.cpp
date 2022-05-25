#include <iostream> 	//library iostream
#include <string.h> 	//library string
using namespace std; 	//namespace agar cout dan cin dapat diakses

int main() 				//fungsi main
{
 char ulang;	
 char nama[25]; 
 char welcome[25]; 
 int pilihan, i; 
 float s[i], t[i],g[i], kondisi=1; 
 float massaunsur, persentase; 
 
 cout<<"=========================================================";
 cout<<"\n---David Panondang Sinaga---";
 cout<<"\n---121280137---";
 cout<<"\n---Teknik Kimia---";
 cout<<"\n=========================================================" << endl;
 
 cout<<"=========================================================";
 cout<<"\n---Michael Reynaldi---";
 cout<<"\n---121280147---";
 cout<<"\n---Teknik Kimia---";
 cout<<"\n========================================================="<< endl;
 
 cout<<"=========================================================";
 cout<<"\n---Putri Tasya Br. Tobing---";
 cout<<"\n---121280126---";
 cout<<"\n---Teknik Kimia---";
 cout<<"\n========================================================="<< endl;
 
 

 cout<<"=========================================================";
 cout<<"\n---Selamat datang di program perhitungan massa unsur dalam senyawa---";
 cout<<"\n=========================================================";
 cout<<"\nMasukkan Nama Anda : "; 
 cin.getline(nama,25);
 
 start :
 cout<<"=========================================================";
 strcpy(welcome, "Selamat Datang"); 	//copy isi selamat datang ke welcome
 cout<<endl;
 cout<<"\n-------------"<<welcome<<" "<<nama<<"--------------"<<endl;
 cout<<"\n=========================================================";

 do{ 												//perulangan do
 cout<<"\n\nPilih Salah Satu Bahasan Yang Diinginkan";
 cout<<"\n1. Menghitung massa unsur dalam senyawa";
 cout<<"\n2. Menghitung persentase massa unsur dalam senyawa";
 cout<<"\n\n=========================================================";
 cout<<"\nPilihan anda : ";
 cin>>pilihan;
 cout<<"=========================================================\n";

	switch(pilihan) //percabangan switch
	 {
		 case 1: 
		 cout<<"Menghitung massa unsur dalam senyawa \n\n";
		 for(i=0; i<=0; i++){
		 	 cout<<"Masukkan Ar unsur : ";
			 cin>>s[i];
			 cout<<"Masukkan Mr senyawa : ";
			 cin>>t[i];
			 cout<<"Masukkan Jumlah unsur dalam senyawa : ";
			 cin>>g[i];
			 massaunsur= (s[i] * g[i]) / t[i] ;
			 cout<<"=========================================================\n";
			 cout<<"Nilai massa unsur adalah : "<<massaunsur;
			 cout<<"\n=========================================================";
		 }
		 
		 kondisi=0;	//kondisi dijalankan
		 break;		//eksekusi ke akhir pernyataan switch
		
		case 2:
		 cout<<"Menghitung persentase unsur dalam senyawa \n\n";
		 for(i=0; i<=0; i++){
		 	 cout<<"Masukkan massa unsur : ";
			 cin>>s[i];
			 cout<<"Masukkan massa senyawa : ";
			 cin>>t[i];
			 persentase= (s[i] / t[i]) * 100;
			 cout<<"=========================================================\n";
			 cout<<"Persentase unsur dalam senyawa adalah : "<<persentase<< "%";
			 cout<<"\n=========================================================";
		 }
		 
		 kondisi=0;	//kondisi dijalankan
		 break;		//eksekusi ke akhir pernyataan switch
		
		default:	//jika nilai ekspresi tidak ada satupun yang cocok
		 cout<<"Pilihan anda tidak ada dalam daftar bahasan";
	 }
 }

	while (kondisi);	//pengulangan while dijalankan
 	cout<<"\nApakah anda ingin mengulang [Y/N] : "; cin>>ulang;
 	if(ulang=='Y' || ulang=='y'){
 		system("cls");
 		goto start;
	}
	else {
		goto finish;
	}
 	finish :
 	return 0;		
}
