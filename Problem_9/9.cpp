//There exists exactly one Pythagorean triplet for which a + b + c = 1000.Find the product abc.  31875000

#include<stdio.h>

	int main(){
		
		//a*a + b*b = c*c
		
		int a,b,c;
		
		for(c=1; c<500 ; c++){
		
			for(a=1 ; a<c ; a++){
			
				for(b=1 ; b<c ; b++){
				
					if(a<b){
				
						if(a*a + b*b == c*c){
			
							if(a+b+c==1000){
								
								printf("%d ",a*b*c);
							}
						}
					}
				}
			}
		
		}
		return 0;
	}
