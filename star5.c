#include <stdio.h>
int main(){
	int star;
	scanf("%d",&star);
	int i,j;
	
	for(i=1;i<=star;i++){
		for(j=star;j>=1;j--){
			if(j>i){
				printf(" ");
			}
			if(j<=i){
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
