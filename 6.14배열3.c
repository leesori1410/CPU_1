#include <stdio.h>
int main(){
	int a[6];
	int b;
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<6;i++){
		b=a[i];
		if(b%2==0){
			printf("%d ",b);
		}
	}
	printf("\n");
	for(int i=0;i<6;i++){
		int b=a[i];
		if(b%2==1){
			printf("%d ",b);
		}
	}
	
	return 0;
} 
