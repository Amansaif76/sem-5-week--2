#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int rem;
	int rev;
	while(n>0){
		rem = n%10;
		rev  = rev*10 +rem;
		n=n/10;
		
	}
	printf("%d ",rev);
}
