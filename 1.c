#include <stdio.h>
int main(){
	
	//������ a score1, b score 2, h max 
	
	int a,b;
	printf("����1 �Է�: ");
	scanf("%d",&a);
	printf("����2 �Է�: ");
	scanf("%d",&b);
	
	int sum = a+b; 
	printf("�հ� : %d\n",sum);
	printf("��� : %d\n",sum/2);
	
	int h;
	if((a>=0)&&(b>=0)){
		if(a>b){
			h = a;
			printf("�ְ��� : %d\n",h);
		}
		else if(a<b){
			h = b;
			printf("�ְ��� : %d\n",h);
		}
		else if(a==b)
			printf("�ְ��� : %d,%d\n",a,b);
	}
	
	//switch~case
	int aabc = a/10;
	switch(aabc){
		case 10: case 9 :
			printf("���� 1 : A\n");
			break;
		case 8:
			printf("���� 1 : B\n");
			break;
		case 7:
			printf("���� 1 : C\n");
			break;
		case 6:
			printf("���� 1 : D\n");
			break;
		case 5:
			printf("���� 1 : E\n");
			break;
		default :
			printf("���� �� ����ϼ���^^ \n");
			break; 
	}
	
	int babc = b/10;
	switch(babc){
		case 10: case 9 :
			printf("���� 2 : A\n");
			break;
		case 8:
			printf("���� 2 : B\n");
			break;
		case 7:
			printf("���� 2 : C\n");
			break;
		case 6:
			printf("���� 2 : D\n");
			break;
		case 5:
			printf("���� 2 : E\n");
			break;
		default :
			printf("ȭ����\n");
			break; 
	}
	
/*	
	if(a>=90)
		printf("����1 : A\n");
	if(a<90&&a>=80)
			printf("����1 : B\n");
	if(a<80&&a>=70)
			printf("����1 : C\n");
	if(a<70&&a>=0)
			printf("ȭ����\n");		
	
	if(b>=90)
		printf("����2 : A\n");
	if(b<90&&b>=80)
			printf("����2 : B\n");
	if(b<80&&b>=70)
			printf("����2 : C\n");
	if(b<70&&b>=0)
			printf("ȭ����\n");
*/
			
		return 0;
		}
	
	

