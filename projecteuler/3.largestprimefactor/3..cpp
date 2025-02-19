/*
    13195'in asal çarpanlarý 5, 7, 13 ve 29'dur.

    600851475143 sayýsýnýn en büyük asal çarpaný kaçtýr? 6857
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
