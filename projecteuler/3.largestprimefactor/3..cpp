/*
    13195'in asal �arpanlar� 5, 7, 13 ve 29'dur.

    600851475143 say�s�n�n en b�y�k asal �arpan� ka�t�r? 6857
*/

#include<stdio.h>

int main(){
	
	long long int sayi = 600851475143;
	int sayac = 2;
	int enb = 0;
	
	for(;sayi>1;){
		
		if(sayi % sayac==0){
			
			sayi /= sayac;
			//printf("%d ",sayac);
			if(sayac>enb){
				
				enb = sayac;
			}
		}
		else 
			sayac++;
	}
	
	printf("%d",enb);


	return 0;
}
