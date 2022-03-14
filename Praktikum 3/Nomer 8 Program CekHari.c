/*Nama File 	: CekHari*/
/*Deskripsi 	: Membuat program CekHari */
/*Pembuat   	: Fitra Syamli Yudhisaputra - 24060121140124*/
/*Tgl Pembuatan	: 12 Maret 2022*/


#include <stdio.h>

int main (){
	//Kamus
	int h;
	
	//Algoritma
	printf("Membuat Program Cek Hari \n");
	printf("Masukan nomor hari : ");
	scanf("%d", &h);
	
	switch(h){
		case 1 :
			printf("Senin");
			break;
		case 2 :
			printf("Selasa");
			break;
		case 3 :
			printf("Rabu");
			break;
		case 4 :
			printf("Kamis");
			break;
		case 5 :
			printf("Jumat");
			break;
		case 6 :
			printf("Sabtu");
			break;
		case 7 :
			printf("Minggu");
			break;
		default : 
			printf(" Masukan nomor hari tidak tepat");
	}
	return 0;
}
