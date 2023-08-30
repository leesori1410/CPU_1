#include <stdio.h>
int main(){
	
	//구구단 
	
	int t;
	printf("원하는 수를 입력하시요.");
	scanf("%d",&t); 
	
	int a;
	
	for(a=0;a<10;a++){
		printf("%d * %d = ",t,a);
		printf("%d\n",(t*a));
	}

	

	return 0;
}
