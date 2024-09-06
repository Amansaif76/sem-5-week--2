#include<stdio.h>
int main(){
	int n,a =0,b =1,fib ;
	printf("enter the range of fibonacci number: \n");
	scanf("%d",&n);
	if(n==1)
	printf("%d",a);
	
	if(n==2)
	printf("%d %d",a ,b);
	if(n>=3){
		printf("%d %d ",a ,b);
	
	for(int i=3;i<=n;i++){
		fib = a+b;
		printf("%d ",  fib);
		a= b;
		b = fib;
		
}
	}
	}
