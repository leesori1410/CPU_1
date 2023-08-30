#include <stdio.h>
int main(){
	int star;
	int i,j;
	scanf("%d",&star);
	for(i=1;i<=star;i++){
		for(j=1;j<=star-(i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
