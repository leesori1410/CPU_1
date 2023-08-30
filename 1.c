#include <stdio.h>
int main(){
	
	//변수값 a score1, b score 2, h max 
	
	int a,b;
	printf("점수1 입력: ");
	scanf("%d",&a);
	printf("점수2 입력: ");
	scanf("%d",&b);
	
	int sum = a+b; 
	printf("합계 : %d\n",sum);
	printf("평균 : %d\n",sum/2);
	
	int h;
	if((a>=0)&&(b>=0)){
		if(a>b){
			h = a;
			printf("최고점 : %d\n",h);
		}
		else if(a<b){
			h = b;
			printf("최고점 : %d\n",h);
		}
		else if(a==b)
			printf("최고점 : %d,%d\n",a,b);
	}
	
	//switch~case
	int aabc = a/10;
	switch(aabc){
		case 10: case 9 :
			printf("점수 1 : A\n");
			break;
		case 8:
			printf("점수 1 : B\n");
			break;
		case 7:
			printf("점수 1 : C\n");
			break;
		case 6:
			printf("점수 1 : D\n");
			break;
		case 5:
			printf("점수 1 : E\n");
			break;
		default :
			printf("조금 더 노력하세요^^ \n");
			break; 
	}
	
	int babc = b/10;
	switch(babc){
		case 10: case 9 :
			printf("점수 2 : A\n");
			break;
		case 8:
			printf("점수 2 : B\n");
			break;
		case 7:
			printf("점수 2 : C\n");
			break;
		case 6:
			printf("점수 2 : D\n");
			break;
		case 5:
			printf("점수 2 : E\n");
			break;
		default :
			printf("화이팅\n");
			break; 
	}
	
/*	
	if(a>=90)
		printf("점수1 : A\n");
	if(a<90&&a>=80)
			printf("점수1 : B\n");
	if(a<80&&a>=70)
			printf("점수1 : C\n");
	if(a<70&&a>=0)
			printf("화이팅\n");		
	
	if(b>=90)
		printf("점수2 : A\n");
	if(b<90&&b>=80)
			printf("점수2 : B\n");
	if(b<80&&b>=70)
			printf("점수2 : C\n");
	if(b<70&&b>=0)
			printf("화이팅\n");
*/
			
		return 0;
		}
	
	

