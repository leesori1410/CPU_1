#include <stdio.h>
int main(){
	int score1;
	printf("점수를 입력하시요.");
	scanf("%d",&score1);
	
	int score2;
	score2 = score1/10;
	
	
	switch (score2){
		case 10: case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("c");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");
			break;
		
	} 
	
	return 0;
}
