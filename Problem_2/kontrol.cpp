#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
	int start1 = 1;
	int start2 = 2;
	int sum = 0, temp;
	for(int i = 0; start2 < 4000000; i++)
	{
		sum += start2;
		temp = start1 + (start2 << 1);
		start2 = start1 + start2 + temp;
		start1 = temp;
	}
	printf("%d\n", sum);
	return 0;
}
*/
int main(){
	int sayi1=1;
	int sayi2=1;
	int a;
	
	printf("%d %d ", sayi1,sayi2);
	
	for(a=0; a<35 ; a++){
		
		int b = sayi2;                
		sayi2 += sayi1;               
		sayi1= b;                     
		
		if ((sayi2 + sayi1)<4000000)
		printf("%d ",sayi2);
		
}
}/*
#include <stdio.h>
int fibonacci(int limited);
main() {
	int limited;
	printf("Enter the maximum values which does not exceed 4 million:  ");
	scanf("%d",&limited);
	if(limited > 4000000) {
		printf("I warned you, the last 10 seconds before earth is destroyed. Run!");
		return 0;
	}
	printf("%d",fibonacci(limited));
	
	
	
}
int fibonacci(int limited) {
	int a1=1,a2=2,b,i,sum=2;
	for(i=1;i<limited;i++){
		b= a1 +a2;
		if(b >4000000)
			break;
		else if(b%2==0)
			sum += b; //  sum =sum+b;
		a1=a2;
		a2=b;
	}
	return sum;
}*/
