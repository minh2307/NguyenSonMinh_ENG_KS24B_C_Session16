#include <stdio.h>

void array(int *a,int size);
int main(){
	int a[]={5,10,20,30,25,15};
	int size=sizeof(a)/sizeof(int);
	printf("Mang truoc khi sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n", i,a[i] );
	}
	array(a,size);
	return 0;
}
void array(int *a, int size){
	printf("Mang sau khi sap xep la: \n");
		for( int i=0;i<size-1;i++){
			for(int j=0;j<size-i-1;j++){
				if(*(a +j)>*(a+j +1)){
				int temp=*(a +j);
				*(a+j)=*(a+j +1);
				*(a+j +1)=temp;
				}
			}
		}
		for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n", i,a[i] );
		}
	}
