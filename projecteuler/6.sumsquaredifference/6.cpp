/*
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
//�lk y�z do�al say�n�n kareleri toplam� ile toplam�n karesi aras�ndaki fark� bulun.  25164150
#include<stdio.h>

int main(){
	
	int i,j;
	int sum = 0;
	
	for(i=0 ; i<101 ; i++){
		
		sum += i*i;
		
	}
	int sum1 = 0;
	
	for(j=0 ; j<101 ; j++){
		
		sum1 += j;
	}
	
	sum1 = sum1 * sum1;
	
	printf("%d",sum1-sum);
	
	return 0;
}
