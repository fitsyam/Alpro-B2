/*Nama File 	: TunjAnak*/
/*Deskripsi 	: Menghitung dan menampilkan besarnya tunjangan anak pada layar */
/*Pembuat   	: Fitra Syamli Yudhisaputra - 24060121140124*/
/*Tgl Pembuatan	: 14 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int a,g;
	float T;

	//Algoritma
	printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%d", &a);
	printf("Gaji Pokok  : ");
	scanf("%d", &g);

	if ( a < 3) {
		T = a * (g/10);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else{
		T = a * (3/10);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
