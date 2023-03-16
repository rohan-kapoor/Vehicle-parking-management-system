//eg1,2,4 no of digits=3so it will be armstrong if 1^3+2^3+4^3

#include<stdio.h>
#include<math.h>;
int main() {
    int n,count,i,temp,sum,digit;
    printf("value of n is: ");
    scanf("%d",&n);
    temp=n;
    while (temp>0){
    	temp=temp/10;
    	count++;
	}    
	temp=n;
	for(i=0;i<count;i++){
		digit=temp%10;
		sum=sum+pow(digit,count);
		temp=temp/10;
	}
	if(sum==n){
		printf("armstrong no");
	}
	else{
		printf("not armstrong");
	}
	return 0;}
