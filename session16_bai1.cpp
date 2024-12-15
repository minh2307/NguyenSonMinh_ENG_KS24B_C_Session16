#include <stdio.h>

int main(){
	int a = 5;
		printf("gia tri nam trong bien a %d\n",a);
		printf("dia chi cua bien a : %d\n",&a);
	int *aptr=&a;
		printf("dia tri bien  duoc luu tru aptr : %d\n",aptr);
	 	printf("gia tri nam trong bien a %d",*aptr);
 		


return 0;
}

