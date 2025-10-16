/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
10 001'inci asal sayý nedir?	104743
*/
#include <stdio.h>
int main(){
	
	long int sayac, asal, sayi;
	
	sayac=1;
	
	for(sayi=3 ; sayac!=10001 ; sayi+=2){
		
		for(asal = 3 ; asal<sayi ; asal+=2){
			
			if(sayi % asal == 0){
				break;
			}
		}
		if(asal == sayi){
			sayac++;
		}
	}
	printf("%ld",asal);
	
	return 0;
}
	
	
	
	
	
	
