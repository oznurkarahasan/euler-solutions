/*  2520, 1'den 10'a kadar olan sayýlarýn her birine kalansýz bölünebilen en küçük sayýdýr.
1'den 20'ye kadar olan tüm sayýlara eþit olarak bölünebilen (kalansýz bölünebilen) en küçük pozitif sayý nedir ?
232792560
*/

#include<stdio.h>

	int main(){
		
		int i, sayi = 20;
		
		for(i=1 ; i<21 ; i++){
			
			if(sayi % i == 0){
				
				continue;
			}
			else {
				sayi++;
				i=1;
			}
		}
		printf("%d",sayi);
		
	}


