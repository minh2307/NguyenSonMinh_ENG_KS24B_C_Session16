#include <stdio.h>

int sum(int *a,int *b);
int main(){
	int num1=5,num2=2;
	printf("tong cua hai so nguyen la %d ",sum(&num1,&num2));


return 0;
}

int sum(int *a,int *b){
	return *a+*b;
}
