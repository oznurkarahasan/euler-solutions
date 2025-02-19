/*10'un altýnda 3 veya 5'in katý olan tüm doðal sayýlarý listelersek 3, 5, 6 ve 9 elde ederiz. 
Bu katlarýn toplamý 23'tür. 1000'in altýndaki 3 veya 5'in tüm katlarýnýn toplamýný bulun.*/


#include<stdio.h>
int main(){
	
	int i, toplam = 0 ;  //toplam = 0 veriyoruz ki döngü içinde yapýlan iþlem toplam a eklensin.
	
	for (i=0; i<1000 ; i++){ //1000 in altýnda olan sayýlar döngü içine alýndý
		
		if ( i % 3 == 0 || i % 5 == 0){  // 3 e bölümden ya da 5 e bölümden kalan 0 ise,
										// herhangi biri doðru olsa bile devam
			toplam += i;		//toplam a i deðerini ekliyoruz.
		}
		
	}
	printf("%d", toplam);		//döngüden çýktýktan sonra i toplam deðeri ekrana yazýlýr.
	
return 0;
}
