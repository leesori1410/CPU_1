#include <stdio.h>
int main(){
	
	//������ 
	
	int t;
	printf("���ϴ� ���� �Է��Ͻÿ�.");
	scanf("%d",&t); 
	
	int a;
	
	for(a=0;a<10;a++){
		printf("%d * %d = ",t,a);
		printf("%d\n",(t*a));
	}

	

	return 0;
}
