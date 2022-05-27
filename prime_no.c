#include <stdio.h>
#include <math.h>

// print prime number or not
int main()
{
	int x, i;
	printf("Enter the number :");
	scanf("%d",&x);
	for (i=2; i<=x-1; i++){
		if(x%i==0)
			break;
		
	}
	if(i==x)
	printf("%d is a prime number.",x);
	else
	printf("%d is not a prime number.",x);

	return 0;
}

// print all prime number between two numbers
int main(){
	int l,u,i;
	printf("Enter the numbers :");
	scanf("%d %d",&l,&u);
	for(int x=l+1;x<=u-1;x++){
		for(i=2;i<x;i++){
			if(x%i==0)
			break;
		}
		if(i==x)
		printf("%d",x);
		
	}
	return 0;
}