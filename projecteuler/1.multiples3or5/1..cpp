/*10'un alt�nda 3 veya 5'in kat� olan t�m do�al say�lar� listelersek 3, 5, 6 ve 9 elde ederiz. 
Bu katlar�n toplam� 23't�r. 1000'in alt�ndaki 3 veya 5'in t�m katlar�n�n toplam�n� bulun.*/


#include<stdio.h>
int main(){
	
	int i, toplam = 0 ;  //toplam = 0 veriyoruz ki d�ng� i�inde yap�lan i�lem toplam a eklensin.
	
	for (i=0; i<1000 ; i++){ //1000 in alt�nda olan say�lar d�ng� i�ine al�nd�
		
		if ( i % 3 == 0 || i % 5 == 0){  // 3 e b�l�mden ya da 5 e b�l�mden kalan 0 ise,
										// herhangi biri do�ru olsa bile devam
			toplam += i;		//toplam a i de�erini ekliyoruz.
		}
		
	}
	printf("%d", toplam);		//d�ng�den ��kt�ktan sonra i toplam de�eri ekrana yaz�l�r.
	
return 0;
}
