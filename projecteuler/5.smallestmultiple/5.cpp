/*  2520, 1'den 10'a kadar olan say�lar�n her birine kalans�z b�l�nebilen en k���k say�d�r.
1'den 20'ye kadar olan t�m say�lara e�it olarak b�l�nebilen (kalans�z b�l�nebilen) en k���k pozitif say� nedir ?
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


