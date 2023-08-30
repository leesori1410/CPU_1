#include <stdio.h>
int main(){
	
	int x,y;
	char o;
	printf("위치를 입력하시요.(x,y)");
	scanf("%d%c%d",&x,&o,&y);
	
	if(x>0 && y>0){
		printf("1사분면");
	}
	else if(x>0 && y<0){
		printf("4사분면");
	} 
	else if(x<0 && y>0){
		printf("2사분면");
	} 
	else if(x<0 && y<0){
	 	printf("3사분면");
	} 
	else if(x==0 && y==0){
		printf("원점");
	}
	else if(x==0 && y>0){
		printf("x절편");
	}
	else if(x==0 && y<0){
		printf("x절편");
	}
	else if(y==0 && x>0){
		printf("y절편");
	}
	else if(y==0 && x<0){
		printf("y절편");
	}
	else 
		printf("다시 작성하시요."); 
	
	return 0;
}
