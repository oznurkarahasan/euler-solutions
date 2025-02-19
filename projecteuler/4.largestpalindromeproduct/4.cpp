/*Palindromik bir sayı her iki şekilde de aynı şeyi okur. 
2 basamaklı iki sayının çarpımından oluşan en büyük palindrom 9009 = 91 × 99'dur. 
3 basamaklı iki sayının çarpımından oluşan en büyük palindromu bulunuz. 913*993 = 906609*/

#include<stdio.h>
	
	int main(){
		
		int b,i,a,ters,carpim,j;
		int palindrome = 0;
		
		for(i=900 ; i<1000 ; i++){
			
			for(j=900 ; j<1000 ; j++){
				
				carpim = i*j;
				
				ters=0;
				a = carpim;
		
				for( ; a>0 ; ){
			
					b = a % 10;  //b=4  b=3 b=2 b=1
					ters = (ters*10)+b;   //ters 4 ters 43 ters 432 ters 4321
					a = a / 10 ;  //a=123 a=12 a=1
			
				}
		
				if(ters == carpim ){
					
					if(ters > palindrome)
						
						palindrome = ters;
					
				}
				else
					continue;
				
			}
		}
		
		printf("%d ",palindrome);		
		
		
		
return 0;
	}
