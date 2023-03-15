#include<stdio.h>
int main()
{
	int n;
	printf("if no is div by 5 and 11: ");
	scanf("%d",&n);
	if((n%5==0)&&(n%11==0)){
		printf("divisible");
	}
	else{
		printf("not divisible");
	}
	return 0;
}
