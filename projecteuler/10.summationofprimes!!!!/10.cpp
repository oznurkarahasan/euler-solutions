//Find the sum of all the primes below two million.
//�ki milyonun alt�ndaki t�m asal say�lar�n toplam�n� bulun.

#include<stdio.h>

	int main(){
		
	int flag,x,y,i=2,j;
	int toplam = 0;
	
	
	while(i!=2000000){
	
		
		flag=0;
		
		for(j=2 ; j<i ; j++){
			
			if(i % j==0){
				flag=1;
			}
				
			
		}
		if(flag==0){
			
			toplam += i;
		}
	
	i++;
		
	}
		printf("%d",toplam);
		
		
		
		
		return 0;
	}
