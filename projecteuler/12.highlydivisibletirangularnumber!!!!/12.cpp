/*    1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have over five hundred divisors?

28'in beþten fazla böleni olan ilk üçgen sayýsý olduðunu görebiliriz.
Beþ yüzden fazla böleni olan ilk üçgen sayýsýnýn deðeri nedir?*/

#include<stdio.h>

int main(){
	
	int i,num,flag=0,sayac,j;

	
	for(i=1 ; flag!=1 ; i++){
		
		sayac=0;
		num = (i*(i+1))/2;
		
		for(j=1 ; j<=num ; j++){
			
			if(num % j == 0){
				sayac++;
			}
		}
		
		if(sayac>500){
			
			
			flag=1;
			
		}
		
	}
	printf("%d",num);
	
	
	
	
	
	
	
	return 0;
}
