#include <stdio.h>
int main(){
	
	int x,y;
	char o;
	printf("��ġ�� �Է��Ͻÿ�.(x,y)");
	scanf("%d%c%d",&x,&o,&y);
	
	if(x>0 && y>0){
		printf("1��и�");
	}
	else if(x>0 && y<0){
		printf("4��и�");
	} 
	else if(x<0 && y>0){
		printf("2��и�");
	} 
	else if(x<0 && y<0){
	 	printf("3��и�");
	} 
	else if(x==0 && y==0){
		printf("����");
	}
	else if(x==0 && y>0){
		printf("x����");
	}
	else if(x==0 && y<0){
		printf("x����");
	}
	else if(y==0 && x>0){
		printf("y����");
	}
	else if(y==0 && x<0){
		printf("y����");
	}
	else 
		printf("�ٽ� �ۼ��Ͻÿ�."); 
	
	return 0;
}
