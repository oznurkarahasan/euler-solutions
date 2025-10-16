#include <stdio.h>
#include <stdlib.h>
int main(void){

	int sayi,bolen=2;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	int bolunen = sayi;
	printf("Asal carpanlar: ");
		
		while(bolen<sayi){
			if(bolunen%bolen==0){
				printf("%d ", bolen);
				bolunen /= bolen;
			}
			else{
				bolen++;
			}
		}
}
