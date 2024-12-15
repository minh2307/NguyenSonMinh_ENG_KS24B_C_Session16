#include <stdio.h>

int main(){
	int a=5,b=15;
		printf("gia tri cua a truoc khi khai bao con tro: %d\n",a);
		printf("gia tri cua b truoc khi khai bao con tro: %d\n",b);
	int *aptr=&b;
	int *bptr=&a;
		printf("gia tri cua a sau khi khai bao con tro: %d\n",*aptr);
		printf("gia tri cua b sau khi khai bao con tro: %d\n",*bptr);

return 0;
}

