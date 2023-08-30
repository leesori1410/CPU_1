#include <stdio.h>
int main(){
	int s;
	scanf("%d",&s);
	s-=1;
	for(int i= -s; i<=s;i++){
		for(int j=s;j>= -s;j--){
			if(j==-i || j==i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
