/*Fibonacci dizisindeki her yeni terim, �nceki iki terimin eklenmesiyle olu�turulur. 
1 ve 2 ile ba�layarak, ilk 10 terim ��yle olacakt�r:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...
Fibonacci dizisindeki de�erleri d�rt milyonu ge�meyen terimleri dikkate alarak �ift de�erli terimlerin toplam�n� bulunuz.  4613732*/

#include<stdio.h>

int main(){
	
	int a;
	int sayi1=1;
	int sayi2=1;
	int toplam = 0;
	int limit;
	
	
	for(a=0; a<100 ; a++){
		
		int b = sayi2;                
		sayi2 += sayi1;               
		sayi1= b; 
		
		if(sayi2>4000000) {
			
			break;
		}
		
			
		if (sayi2 % 2 == 0){
	
			toplam += sayi2;
			
		}
		
		
		}
	
	printf("%d",toplam);
	
}



