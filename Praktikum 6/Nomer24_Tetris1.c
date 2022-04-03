/*Nama File     : Tetris1.c*/
/*Deskripsi     : Menampilkan susunan karakter '*' sesuai masukan keyboard pada layar.*/
/*Pembuat       : Fitra Syamli Yudhisaputra - 24060121140124*/
/*Tgl Pembuatan : 1 April 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int N,i,j;

	//Algoritma
	printf("Membuat Program susunan '*' \n");
	printf("Masukan nilai N (N > 0)  : ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++){
		for (j = i; j <= N; j++){
			printf("*");
		}
		printf("--%i\n", i-j);
	}
	return 0;
}
